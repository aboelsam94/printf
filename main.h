#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>


#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define NULL_STRING "(null)"

#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE 1
#define CONVERT_UNSIGNED 2


/**
 * struct parameters - struct containing parameters.
 * @unsigned: a flag if value is unsigned.
 * @plus_flag: for if plus_flag flag is specified.
 * @space_flag: for if space_flag flag is specified.
 * @hashtag_flag: for if hashtag_flag flag is specified.
 * @zero_flag: for if zero_flag flag is specified.
 * @minus_flag: for if minus_flag flag is specified.
 *
 * @width: field width.
 * @precision: field precision.
 *
 * @h_modifier: for if h_modifier is specified.
 * @l_modifier: for if l_modifier is specified.
 */

typedef struct parameters
{
	unsigned int unsign :1;
	unsigned int plus_flag : 1;
	unsigned int space_flag : 1;
	unsigned int hashtag_flag : 1;
	unsigned int l_modifier : 1;
	unsigned int h_modifier : 1;
	unsigned int width;
	unsigned int precision;
	unsigned int zero_flag : 1;
	unsigned int minus_flag : 1;
} params_t;

/**
 * struct specifiers - a struct.
 * @specifiers: format token.
 * @f: func associated with a specifier.
*/

typedef struct specifiers
{
	char *specifiers;
	int (*f)(va_list, params_t *);
} specifiers_t;

/* func that prints to the screen */
/**
 * _puts - prints a string.
 * @str: pointet to string.
 *
 * Return: int.
*/

int _puts(char *str);

/**
 * _putchar - a func that prints a char.
 * @c: the char to be printed.
 *
 * Return: int.
*/

int _putchar(int c);

/* mandatory tasks */
int _printf(const char *format, ...);
int print_char(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int prinf_int(va_list ap, params_t *params);

/*advanced tasks*/
int print_binary(va_list ap, params_t *params);
int print_unsigned(va_list ap, params_t *params);
int print_octal(va_list ap, params_t *params);
int print_hex(va_list ap, params_t *params);
int print_HEX(va_list ap, params_t *params);
int print_S(va_list ap, params_t *params);
int print_address(va_list ap, params_t *params);
int print_rev(va_list ap, params_t *params);
int print_rot13(va_list ap, params_t *params);

/*other functions*/
char *convert(long int num, int base, int flags, params_t *params);
int (*get_specifier(char *s))(va_list ap, params_t *params);
int get_print_func(char *s, va_list ap, params_t *params);
int get_flag(char *s, params_t *params);
int get_modifier(char *s, params_t *params);
int get_wwidth(char *s, params_t *params, va_list ap);
int print_fromTo(char *start, char *stop, char *except);
int isDigit(int c);
int printNumber(char *str, params_t *params);
int printNumLeftShift(char *str, params_t *params);
int printNumRightShift(char *str, params_t *params);
int _strlen(char *s);
void paramsInit(params_t *params, va_list ap);
char *getPercision(char *p, params_t *params, va_list ap);

#endif /* _PRINTF_H */
