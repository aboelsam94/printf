#include "main.h"
#include <stdarg.h>

/**
 * _printf - main printf function
 * @format: string of arrays
 * Return: -1 if failed or sum of printed characters if success
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int sum = 0;

	if (!format)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			sum++;
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				sum++;
				continue;
			}
			sum += get_specifier(format[i])(args);
		}
	}
	return (sum);
}
