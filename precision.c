#include "main.h"
#include <stdio.h>

/**
 * precision - that handles the precision for non-custom
 * @format: a constante character
 * @j: integer
 * @note: an argument
 */
int precision(const char *format, int *j, va_list note)
{
	int a, pre;

	a = *j + 1;
	if(format[a] != '.')
		return (pre);
	pre = 0;
	for (a += 1; format[a] != '\0'; a++)
	{
		if(format[a] >= '0' && format[a] <= '9')
		{
			pre *= 10;
			pre += format[a] - '0';
		}
		if (format[a] == '*')
		{
			a++;
			pre = va_arg(note, int);
			break;
		}
		else
			break;
	}

	*j = a - 1;
	return (pre);
}
