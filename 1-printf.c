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
	int j = 0, c = 0, fun;
	spe r = SP_INIT;
	spe *p = &r;
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
				p->fl = flag(format[j], &g);
				p->pre = precision(format, &j, note);
				p->th = width(format, &j, note);
				p->ze = size(format, &j);

				if (format[j + 1] == '%')
				{
					c += display(format[j]);
					j += 2;
				}
				else
				{
					fun = obtenir(format, note, p);
					if (fun != 0)
						c += fun(note, p);
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
