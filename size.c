#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * size - that handles the following length for non-custom
 * @format: a constante character
 * @j: integer
 * Return: an integer
 */
int size(const char *format, int *j)
{
	int c, ze;

	c = *j + 1;
	ze = 0;
	if (format[c] == 'h')
	{
		ze = S_SHORT;
	}
	else if (format[c] == 'h')
	{
		ze = S_LONG;
	}
	if (ze == 0)
	{
		*j = c - 1;
	}
	else
	{
		*j = c;
	}
	return (ze);
}
