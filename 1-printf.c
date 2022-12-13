#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - that produces output according to a format
 * @format: a character constant
 * Return: an integer
 */

int _printf(const char *format, ...)
{
	int j, c, (*fun)(va_list);
	va_list note;

	va_start(note, format);
	j = 0; c = 0;
	if (format == NULL)
		return (-1);
	else
	{
		while (format && format[j] != '\0')
		{
			if (format[j] == '%')
			{
				if (format[j + 1] == '%')
				{
					c += display(format[j]);
					j += 2;
				}
				else
				{
					fun = ob_func(format[j + 1]);
					if (fun != 0)
						c += fun(note);
					else
						c = display(format[j]) + display(format[j + 1]);
					j += 2;
				}
			}
			else
			{
				c += display(format[j]);
				j++;
			}
		} va_end(note);
		return (c);
} return (-1);
}
