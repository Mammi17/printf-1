#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * ob_func - that prints the correct character
 * @a: a character
 * Return: an integer
 */

int (*ob_func(char a))(va_list)
{
	int j;
	ob point[] = {
		{"s", op_st},
		{"c", op_c},
		{"i", op_t},
		{"d", op_de},
		{"%", op_cent},
		{"u", op_un},
		{"o", op_oc},
		{"x", op_hexal},
		{"X", op_hexup},
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
			return (point[j].funct);
	}
	return (NULL);
}
