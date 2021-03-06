/*****************************************************************************
CORE XPL OPTIONS
*****************************************************************************/
// Allow device to be configured (about 3kB flash)
//#define XPL_CONFIG
//#define XPL_GROUPS
//#define XPL_FILTERS
//interval to send config.basic messages
#define XPL_CONFIG_INTERVAL 1
//interval to send hbeat.basic messages
#define XPL_HBEAT_INTERVAL 5
//Allow interrupts usage
//#define XPL_INTERRUPTS

/*****************************************************************************
DEBUG OPTIONS
*****************************************************************************/
// To print debug info
#define XPL_DEBUG
// to print memory related debug info
//#define XPL_DEBUG_MEM

// to print debug info on LCD
//(you should include Wire.h & LiquidCrystal_I2C.h)
//#define XPL_DEBUG_LCD

//uncomment to reduce main loop speed, mainly useful to know whitch module hang
//#define XPL_SLOWDEBUG 500


/*****************************************************************************
ETHERNET OPTIONS
*****************************************************************************/

#define ENC28J60_PIN 10
//#define XPL_IP
#define XPL_DHCP 
// xPL default port, do not change
#define XPL_PORT 3865

#define PS2_CLK_PIN 6
#define PS2_DATA_PIN 5
