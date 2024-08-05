#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID 0xEEEE
#define PRODUCT_ID 0x2019
#define DEVICE_VER 0x0001
#define MANUFACTURER "Jan Lunge"
#define PRODUCT "3by2"

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

/* key matrix pins  for beccas board*/
#define MATRIX_ROW_PINS \
    { F6, B2 }
#define MATRIX_COL_PINS \
    { F7, B1, B3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
