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
	int b, th;

	b = *j + 1;
	th = 0;
	for (b = *j + 1; format[b] != '\0'; b++)
	{
		if (format[b] >= '0' && format[b] <= '9')
			{
				th *= 10;
				th += format[b] - '0';
			}
		}
		else if (format[b] == '*')
		{
			b++;
			th = va_arg(note, int);
			break;
		}
		else
			break;
	}

	*j = b - 1;
	return (th);
}
