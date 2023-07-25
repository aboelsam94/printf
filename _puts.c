#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 * Return: number of characters printed
*/

int _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
