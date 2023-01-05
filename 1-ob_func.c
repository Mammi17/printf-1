#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * ob_func - that prints the correct character
 * @a: a character
 * Return: an integer
 */

int obtenir(const char *a, va_list note, spe *p)
/*int (*ob_func(char a))(va_list note, spe *p)*/
{
	int *i, j;
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

	for (j = 0; point[j].cor != '\0'; j++)
	{
		if (a[*i] == point[j].cor[0])
			return (point[j].funct(note, p));
	}
	if (point[j].cor[0]== '\0')
	{
		if (a[*i] == '\0')
			return (-1);
		len += write(1, "%%", 1);
		if (a[*i - 1] == ' ')
			len += write(1, " ", 1);
		else if (p->th)
		{
			(*i)--;
			while (a[*i] != ' ' && a[*i] != '%')
				(*i)--;
			if (a[*i] == ' ')
				(*i)--;
			return (1);
		}
		len += display(a[*i]);
		return (len);
	}
	return (-1);
}

/**
 * obtenir - handles the specificateur
 * @a: a character
 * @p: a structure
 * Return: an integer
 

int obtenir(char a, va_list note, spe *p)
{
	int (*fonc)(va_list note, spe *p) = ob_func(a);
	if (fonc)
	{
		return (fonc(note, p));
	}
	return (0);
}*/
