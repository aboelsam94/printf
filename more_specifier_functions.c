#include "main.h"
#include <stdarg.h>

/**
 * print_unsigned - Prints an integer.
 * @arg: The integer to be printed.
 * Return: i
 */
int print_unsigned(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int i;

	i = print_u_number(n, 0);
	return (i);
}

/**
 * print_u_number - Prints an integer.
 * @n: The integer to be printed.
 * @i: number of digits printed
 * Return: i
 */
int print_u_number(unsigned int n, int i)
{
	unsigned long num = n;

	if ((num / 10) > 0)
	{
		i = print_number(num / 10, i);
	}
	_putchar((num % 10) + '0');
	i++;
	return (i);
}

/**
 * print_oct - Prints unsigned int base 8
 * @arg: arguments
 * Return: number of digits printed
*/
int print_oct(va_list arg)
{
	unsigned int i;
	unsigned int num = va_arg(arg, unsigned int);
	int sum = 0;
	unsigned int n;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 1; num / i > 7; i *= 8)
	{
	}
	for (; i; i /= 8)
	{
		n = num / i;
		_putchar(n + '0');
		num -= i * n;
		sum++;
	}
	return (sum);
}

/**
 * print_hexa - print hexadecimal in lowercase letters
 * @arg: arguments
 * Return: number of characters printed
*/
int print_hexa(va_list arg)
{
	unsigned int i;
	unsigned int num = va_arg(arg, unsigned int);
	int sum = 0;
	unsigned int n;
	char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
		'9', 'a', 'b', 'c', 'd', 'e', 'f'};

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 1; num / i > 15; i *= 16)
	{
	}
	for (; i; i /= 16)
	{
		n = num / i;
		_putchar(digit[n]);
		num -= i * n;
		sum++;
	}
	return (sum);
}

/**
 * print_HEXA - print hexadecimal with uppercase letters
 * @arg: arguments
 * Return: number of characters printed
*/
int print_HEXA(va_list arg)
{
	unsigned int i;
	unsigned int num = va_arg(arg, unsigned int);
	int sum = 0;
	unsigned int n;
	char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
		'9', 'A', 'B', 'C', 'D', 'E', 'F'};

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 1; num / i > 15; i *= 16)
	{
	}
	for (; i; i /= 16)
	{
		n = num / i;
		_putchar(digit[n]);
		num -= i * n;
		sum++;
	}
	return (sum);
}
