//config.h - main configuration file

//SHR16 - 16bit shift register
//pinout - hardcoded
//#define SHR16_CLK //signal d13 - PC7
//#define SHR16_LAT //signal d10 - PB6
//#define SHR16_DAT //signal d9  - PB5

//shift register outputs
//LEDS - hardcoded
//#define SHR16_LEDG0 0x0100
//#define SHR16_LEDR0 0x0200
//#define SHR16_LEDG1 0x0400
//#define SHR16_LEDR1 0x0800
//#define SHR16_LEDG2 0x1000
//#define SHR16_LEDR2 0x2000
//#define SHR16_LEDG3 0x4000
//#define SHR16_LEDR3 0x8000
//#define SHR16_LEDG4 0x0040
//#define SHR16_LEDR4 0x0080
#define SHR16_LED_MSK 0xffc0

//Direction/Enable signals
#define SHR16_DIR_0 0x0001
#define SHR16_ENA_0 0x0002
#define SHR16_DIR_1 0x0004
#define SHR16_ENA_1 0x0008
#define SHR16_DIR_2 0x0010
#define SHR16_ENA_2 0x0020

#define SHR16_DIR_MSK 0x0015
#define SHR16_ENA_MSK 0x002c

//TMC2130 - Trinamic stepper driver
//pinout - hardcoded
#define TMC2130_AXC  3    //axis count

//0 - IDLER
//1 - SELECTOR
//2 - PULLEY

//UART0
#define UART0_BDR 115200

//UART1
#define UART1_BDR 115200


#define EXTRUDERS 5

#define TMC2130_SG_THR     5    // stallguard treshold (sensitivity), range -128..127, real 0-3
#define TMC2130_TCOOLTHRS  450  // usable range 400-600

#define BTN_APIN A2
//const int ButtonPin = A2;
//const int ShiftOutClockPin = 13;
//const int ShiftOutDataPin  =  9;
//const int ShiftOutLatchPin = 10;
