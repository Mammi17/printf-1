#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * op_c - function that print a character
 * @note: an argument
 * @p: a structure
 * Return: an integer
 */
int op_c(va_list note, spe *p)
{
	int d;

	d = va_arg(note, int);
	return (obtenir(d, p));
}

/**
 * op_de - function that prints a decimal
 * @note: an argument
 * @p: a structure
 * Return: an integer
 */
int op_de(va_list note, spe *p)
{
	unsigned int c, numb, abs, a;
	int j;
	char l, b;

	(void)p;

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
 * @p: a structure
 * Return: an integer
 */
int op_st(va_list note, spe *p)
{
	char *string, b;
	int j;

	(void)p;

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
 * @p: a structure
 * Return: an integer
 */
int op_t(va_list note, spe *p)
{
	int t;

	(void)p;

	t = op_de(note, p);
	return (t);
}

/**
 * op_cent - that switch to percentage
 * @note: an argument
 * @p: a structure
 * Return: an integer
 */
int op_cent(va_list note, spe *p)
{
	char *string;

	(void)p;

	string = "%";
	if (va_arg(note, int) == *string)
	{
		return (*string);
	}
	return (*string);
}
