#include "main.h"
#include <stdio.h>

/**
 * width - that handles the width for non-custom
 * @format: a constante character
 * @j: integer
 * @note: an argument
 * Return: an integer
 */
int width(const char *format, int *j, va_list note)
{
	int a, th;

	a = *j + 1;
	th = 0;
	for (a = *j + 1; format[a] != '\0'; a++)
	{
		if (format[a] >= '0' && format[a] <= '9')
		{
		       th *= 10;
		      th += format[a] - '0';
		}
		if (format[a] == '*')
		{
			a++;
			th = va_arg(note, int);
			break;
		}
		else
			break;
	}

	*j = a - 1;
	return (th);
}
