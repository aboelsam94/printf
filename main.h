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
int print_int(va_list arg);
int _puts(char *str);
int print_number(int n, int i);
int (*get_specifier(char c))(va_list arg);
int print_binary(va_list arg);
int print_u_number(unsigned int n, int i);
int print_unsigned(va_list arg);
int print_oct(va_list arg);
int print_hexa(va_list arg);
int print_HEXA(va_list arg);
#endif /* PRINTF_FUNCTIONS */
