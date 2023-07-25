#include "main.h"
#include <stddef.h>

/**
 * get_specifier - function to fetch function associated with conversion
 * @c: conversion specifier
 * Return: function associted
*/

int (*get_specifier(char c))(va_list arg)
{
	int j;
	specifier_t specs[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_oct},
		{'x', print_hexa},
		{'X', print_HEXA},
		{'S', print_STR}
	};

	for (j = 0; specs[j].s; j++)
	{
		if (specs[j].s == c)
			return (specs[j].f);
	}
	return (NULL);
}
