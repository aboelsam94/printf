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
		{'i', print_int}
	};

	for (j = 0; specs[j].s; j++)
	{
		if (specs[j].s == c)
			return (specs[j].f);
	}
	return (NULL);
}
