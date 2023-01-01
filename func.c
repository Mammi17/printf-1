#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * op_c - function that print a character
 * @note: an argument
 * Return: an integer
 */
int op_c(va_list note)
{
	int d;

	d = va_arg(note, int);
	return (display(d));
}

/**
 * op_de - function that prints a decimal
 * @note: an argument
 * Return: an integer
 */
int op_de(va_list note)
{
	unsigned int c, numb, abs, a;
	int j;
	char l, b;

	c = 0;
	j = va_arg(note, int);
	l = '-';
	if (j < 0)
	{
		abs = (j * -1);
		c += display(l);
	}
	else
		abs = j;
	a = abs;
	numb = 1;
	while (a > 9)
	{
		a /= 10;
		numb *= 10;
	}
	while (numb > 0)
	{
		b = ((abs / numb) % 10) + '0';
		c += display(b);
		numb /= 10;
	}
	return (c);
}

/**
 * op_st - function that prints a string
 * @note: an argument
 * Return: an integer
 */
int op_st(va_list note)
{
	char *string, b;
	int c, j;

	string = va_arg(note, char *);
	if (string == NULL)
	{
		string = "(null)";
	}
	for (j = 0; string[j] != '\0'; j++)
	{
		b = string[j];
		display(b);
	}
	return (j);
}

/**
 * op_t - function that prints an integer
 * @note: an argument
 * Return: an integer
 */
int op_t(va_list note)
{
	int t;

	t = op_de(note);
	return (t);
}

/**
 * op_cent - that switch to percentage
 * @note: an argument
 * Return: an integer
 */
int op_cent(va_list note)
{
	char *string;

	string = "%";
	if (va_arg(note, int) == *string)
	{
		return (*string);
	}
	return (*string);
}
