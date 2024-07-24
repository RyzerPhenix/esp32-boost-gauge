// Setup for the ESP32 S3 with GC9A01 display

#define USER_SETUP_ID 70
#define GC9A01_DRIVER

#define TFT_WIDTH 240

#define TFT_HEIGHT 240

// Typical board default pins - change to match your board

#define TFT_CS 9

#define TFT_MOSI 11

#define TFT_SCLK 10

#define TFT_MISO 13

// Use pins in range 0-31

#define TFT_DC 8

#define TFT_RST 12

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

#define SMOOTH_FONT

// FSPI port (SPI2) used unless following defined

#define USE_HSPI_PORT
#define SPI_FREQUENCY 80000000 // Maximum for ILI9341