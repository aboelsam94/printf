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

/**
 * print_int - Prints an integer.
 * @arg: The integer to be printed.
 * Return: i
 */
int print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int i;

	i = print_number(n, 0);
	return (i);
}

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 * @i: number of digits printed
 * Return: i
 */
int print_number(int n, int i)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	{
		i = print_number(num / 10, i);
	}
	_putchar((num % 10) + '0');
	i++;
	if (n < 0)
		i++;
	return (i);
}

/**
 * print_binary - print an integer as binary
 * @arg: arguments
 * Return: number of  digits printed
*/
int print_binary(va_list arg)
{
	unsigned int i;
	unsigned int num = va_arg(arg, unsigned int);
	int sum = 0;

	for (i = 1; num / i != 1; i *= 2)
	{
	}
	for (; i; i /= 2)
	{
		if (num / i == 1)
		{
			_putchar('1');
			num %= i;
		}
		else
			_putchar('0');
		sum++;
	}
	return (sum);
}
