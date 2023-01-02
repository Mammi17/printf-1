#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - that produces output according to a format
 * @format: a character constant
 * Return: an integer
 */

int _printf(const char *format, ...)
{
	int j = 0, c = 0, (*fun)(va_list);
	drap g;
	va_list note;

	va_start(note, format);
	if (format != NULL)
	{
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format && format[j] != '\0')
		{
			if (format[j] == '%')
			{
				/*if (*ac > 0)
					write(1, &ab, *ac);
				else
					*ac = 0;*/
				while (flag(format[j], &g))
					format++;
				if (precision(format, &j, note))
					format++;
				if (width(format, &j, note))
					format++;
				if (size(format, &j))
					format++;
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
				j++;
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
