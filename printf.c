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
	int j;
	specifier_t specs[] = {
		{'c', print_char},
		{'s', print_str}
	};

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
			for (j = 0; specs[j].s; j++)
			{
				if (specs[j].s == format[i])
				{
					sum += specs[j].f(args);
					break;
				}
			}
		}
	}
	_putchar('\n');
	return (sum);
}
