#include <stdarg.h>
#include "main.h"

/**
 * print_char - function to print single character
 * @arg: array of arguments of main printf
 * Return: 1
*/

int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}

/**
 * print_str - function to print string
 * @arg: arguments of main printf
 * Return: number of characters printed
*/

int print_str(va_list arg)
{
	int i;

	i = _puts(va_arg(arg, char *));
	return (i);
}
