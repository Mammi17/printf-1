#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

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
	return (obtenir(d, note, p));
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
	char *string;
	int j, min = 1, l;

	string = va_arg(note, char *);
	if (string == NULL)
	{
		string = "(null)";
	}
	for (j = 0; string[j] != '\0'; j++)
	{
		j++;
	}
	if (p->pre >= 0 && p->pre < j)
		j = p->pre;
	if (p->th > j)
	{
		if (p->fl & min)
		{
			write(1, &string[0], j);
			l = p->th - j;
			while (l > 0)
			{
				display(' ');
				l--;
			}
			return (p->th);
		}
		else
		{
			l = p->th - j;
			while (l > 0)
			{
				display(' ');
				l--;
			}
			write(1, &string[0], j);
			return (p->th);
		}
	}
	return (write(1, string, j));
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
