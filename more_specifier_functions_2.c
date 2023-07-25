#include "main.h"
#include <stdarg.h>

/**
 * print_STR - prints string without non-printable character
 * @arg: arguments
 * Return: number of characters printed
*/
int print_STR(va_list arg)
{
	char *str = va_arg(arg, char *);
	int sum = 0;
	char x[] = {'\\', 'x'};
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_puts(x);
			sum += print_HEXA_num((int)str[i]);
			sum += 2;
		}
		else
			sum += _putchar(str[i]);
	}
	return (sum);
}

/**
 * print_HEXA_num - print hexadecimal with uppercase letters
 * @num: integer
 * Return: number of characters printed
*/
int print_HEXA_num(int num)
{
	unsigned int i;
	int sum = 0;
	unsigned int n;
	char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
		'9', 'A', 'B', 'C', 'D', 'E', 'F'};

	if (num == 0)
	{
		_puts("00");
		return (2);
	}
	if (num < 16)
	{
		_putchar('0');
		sum++;
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
