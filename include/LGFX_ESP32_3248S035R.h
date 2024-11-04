#pragma once

#define LGFX_USE_V1
#include <LovyanGFX.hpp>

#ifndef SPI_FREQUENCY
#define SPI_FREQUENCY 40000000
#endif
#ifndef SPI_BUS_HOST
#define SPI_BUS_HOST SPI2_HOST
#endif
#ifndef SPI_BUS_MODE
#define SPI_BUS_MODE SPI_MODE0
#endif

#define BACKLIGHT_PIN TFT_BLT  // GPIO pin connected to backlight
#define LEDC_CHANNEL 0
#define LEDC_TIMER 13
#define LEDC_BASE_FREQ 5000

class LGFX_ESP32_3248S035R : public lgfx::LGFX_Device
{
    lgfx::Panel_ST7796 _panel_instance;
    lgfx::Bus_SPI _bus_instance;
    lgfx::Light_PWM _light_instance;
    lgfx::Touch_XPT2046 _touch_instance;

public:
    const uint32_t screenWidth = TFT_WIDTH;
    const uint32_t screenHeight = TFT_HEIGHT;

    bool hasButton(void) { return true; }

    LGFX_ESP32_3248S035R(void)
    {
        {
            // SPI
            auto cfg = _bus_instance.config();
            cfg.spi_host = TFT_SPI_HOST;     // HSPI or VSPI
            cfg.spi_mode = TFT_SPI_MODE;
            cfg.freq_write = SPI_FREQUENCY;    // 40 MHz
            cfg.freq_read = 20000000;     // 20 MHz
            cfg.spi_3wire = false;
            cfg.use_lock = true;
            cfg.dma_channel = 1;
            cfg.pin_sclk = SPI_BUS_CLK;
            cfg.pin_mosi = SPI_BUS_MOSI;
            cfg.pin_miso = SPI_BUS_MISO;
            cfg.pin_dc = TFT_DC;
            _bus_instance.config(cfg);    // Apply settings to bus
            _panel_instance.setBus(&_bus_instance);
        }

        {                                        // Set the display panel control.
            // Display panel configuration
            auto panel_cfg = _panel_instance.config();
            panel_cfg.pin_cs = TFT_CS;         // Chip select
            panel_cfg.pin_rst = TFT_RST;        // Reset pin
            panel_cfg.pin_busy = -1;      // Not used
            panel_cfg.bus_shared = true;
            panel_cfg.memory_width = TFT_WIDTH;
            panel_cfg.memory_height = TFT_HEIGHT;
            panel_cfg.panel_width = TFT_WIDTH;
            panel_cfg.panel_height = TFT_HEIGHT;
            panel_cfg.offset_x = 0;
            panel_cfg.offset_y = 0;
            panel_cfg.offset_rotation = 0;
            panel_cfg.invert = false;
            panel_cfg.rgb_order = false;
            _panel_instance.config(panel_cfg);
        }

        // Set the backlight control. (delete if not necessary)
        {
            auto cfg = _light_instance.config(); // Gets a structure for backlight settings.
            cfg.pin_bl = BACKLIGHT_PIN;    // Pin number to which the backlight is connected
            cfg.invert = false; // true to invert the brightness of the backlight
            cfg.freq = LEDC_BASE_FREQ;
            cfg.pwm_channel = LEDC_CHANNEL;
            _light_instance.config(cfg);
            _panel_instance.setLight(&_light_instance); // Set the backlight on the panel.
        }

        // Configure settings for touch screen control.
        {
            auto touch_cfg = _touch_instance.config();

            touch_cfg.freq = 1000000;
            touch_cfg.x_min = 0;
            touch_cfg.x_max = 4095;
            touch_cfg.y_min = 0;
            touch_cfg.y_max = 4095;
            touch_cfg.pin_int = TOUCH_INT;
            touch_cfg.pin_rst = -1;
            touch_cfg.offset_rotation = 0;
            touch_cfg.bus_shared = true;

            // SPI
            touch_cfg.spi_host = SPI2_HOST;
            touch_cfg.freq = 2500000;
            touch_cfg.pin_sclk = TOUCH_CLK;
            touch_cfg.pin_mosi = TOUCH_MOSI;
            touch_cfg.pin_miso = TOUCH_MISO;
            touch_cfg.pin_cs = TOUCH_CS;

            _touch_instance.config(touch_cfg);
            _panel_instance.setTouch(&_touch_instance);
        }

        setPanel(&_panel_instance); // Sets the panel to use.
    }
};
