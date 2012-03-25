/* Useful definitions for manipulating the LCD */
#define LED_ENABLE 0x10
#define LCD_RS 0x2
#define LCD_E  0x1
#define LCD_RW 0x4
#define LCD_BUSY_MASK 0x80


/* Useful function declorations. */
void _lcd_busy(); /* wait until the LCD isn't busy */
void _print_char(unsigned char c); /* Print a char to the display */
