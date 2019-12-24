        ///////////////////////////////////////////////////
        // Setup for Nucleo-F446/767 and ILI9341 display //
        ///////////////////////////////////////////////////
        
// See SetupX_Template.h for all options available

// Define STM32 to invoke parallel bus driver optimised for
// STM32F2xx, STM32F4xx amd STM32F7xx (so far). Other STM32
// processors 
#define STM32

// This setup is for STM boards with UNO v3 header strips and "Mcufriend"
// style plugin boards. 
#define NUCLEO_64_TFT
//#define NUCLEO_144_TFT

#define TFT_PARALLEL_8_BIT

#define ILI9341_DRIVER
//#define ILI9481_DRIVER

// Nucleo 64/144 pins used for the parallel interface TFT
#define TFT_CS   A3  // Chip select control pin
#define TFT_DC   A2  // Data Command control pin
#define TFT_RST  A4  // Reset pin

#define TFT_WR   A1  // Write strobe control pin 
#define TFT_RD   A0  // Read pin

#define TFT_D0   D8  // 8 bit parallel bus to TFT
#define TFT_D1   D9
#define TFT_D2   D2
#define TFT_D3   D3
#define TFT_D4   D4
#define TFT_D5   D5
#define TFT_D6   D6
#define TFT_D7   D7

// Fonts to be available
#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

// At the moment SMOOTH fonts must be disabled for STM32 processors (due to lack of SPIFFS)
// Support for smooth fonts via SD cards is planned.
//#define SMOOTH_FONT
