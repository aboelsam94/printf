#ifndef PRINTF_FUNCTIONS
#define PRINTF_FUNCTIONS
#include <stdarg.h>

/**
 * struct specifier - struct for specifiers
 * @s: character of specifier
 * @f: function associated with specifier
*/

typedef struct specifier
{
	char s;
	int (*f)(va_list arg);
} specifier_t;
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_str(va_list arg);
int _puts(char *str);
#endif /*PRINTF_FUNCTIONS*/
