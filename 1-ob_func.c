#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * ob_func - that prints the correct character
 * @a: a character
 * Return: an integer
 */

int (*ob_func(const char *a))(va_list note, spe *p)
{
	int j, *i;
	ob point[] = {
		{"s", op_st},
		{"c", op_c},
		{"i", op_t},
		{"d", op_de},
		{"%", op_cent},
		{"u", op_un},
		{"o", op_oc},
		{"x", op_hexal},
		{"X", op_hexaup},
		{"S", op_noprint},
		{"r", op_inv},
		{"R", op_rot},
		{"p", op_de},
		{"b", op_bi},
		{NULL, NULL}
	};

	for (j = 0; point[j].cor != NULL; j++)
	{
		if (a == point[j].cor[0])
			return (point[j].funct(note, p));
	}

	if (point[j].cor[0]== '\0')
	{
		if (a[*i] == '\0')
			return (-1);
		len += display("%%");
		if (a[*i - 1] == ' ')
			len += display(" ");
		else if (p->th)
		{
			(*i)--;
			while (a[*i] != ' ' && a[*i] != '%')
				(*i)--;
			if (a[*i] == ' ')
				(*i)--;
			return (1)
		}
		len += display(a[*i]);
		return (len));
	}
	return (NULL);
	{
}
