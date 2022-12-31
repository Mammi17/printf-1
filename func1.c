#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * op_bi - function that print a binary number
 * @note: an argument
 * Return: an integer
 */
int op_bi(va_list note)
{
	unsigned int a, b, j, numb;
	unsigned int bi[32];
	int c;
	char t;

	a = va_arg(note, unsigned int);
	b = (2^31);
	bi[0] = a / b;
	j = 0;
	while (j < 32)
	{
		b /= 2;
		bi[j] = (a / b) % 2;
		j++;
	}
	numb = 0;
	c = 0;
	while (j < 32)
	{
		numb += bi[j];
		if (numb || j == 31)
		{
			t = '0' + bi[j];
			display(t);
			c++;
		}
		j++;
	}
	return (c);
}

/**
 * op_un - function that prints an unsigned number
 * @note: an argument
 * Return: an integer
 */
int op_un(va_list note)
{
	unsigned int numb;
	int c, l;

	numb = va_arg(note, unsigned int);
	c = 1;
	while ((numb / c) > 9)
	{
		c *= 10;
		c++;
	}
	l = 0;
	while (c > 0)
	{
		l += display('0' + (numb / c));
		numb %= c;
		c /= 10;
		c++;
	}
	return (l);
}

/**
 * op_oc - function that prints a number in base 8
 * @note: an argument
 * Return: an integer
 */
int op_oc(va_list note)
{
	unsigned long int l, numb, ab, i, j, m;
	int c;

	c = 0;
	numb = va_arg(note, unsigned long int);
	l = numb;
	i = 1;
	j = 1;
	while (numb > 7)
	{
		numb /= 8;
		j *= 8;
		c ++;
		i++;
	}
	m = 1;
	while (m <= i)
	{
		ab = l / j;
		l %= j;
		j /= 8;
		display(ab + '0');
		c++;
		m++;
	}
	return (c);
}

/**
 * op_hexal - function that convert a number in hexadecimal
 * @note: an argument
 * Return: an integer
 */
int op_hexal(va_list note)
{
	unsigned int l, numb;
	int a, b, j, c;
	char *h;

	c = 0;
	numb = va_arg(note, unsigned int);
	l = numb;
	if (numb == 0)
		return (display('0'));
	while (l != 0)
	{	
		l /= 16;
		c ++;
	}
	h = malloc(c);
	j = 0;
	while (numb != 0)
	{
		a = 0;
		a = numb % 16;
		if (a < 10)
			h[j] = a + '0';
		else
		       h[j] = a + 'w';
		numb /= 16;
		j++;
	}
	b = j-1;
	while (b >= 0)
	{
		display(h[b]);
		b--;
	}
	free(h);
	return (c);
}

/**
 * op_hexaup - function that convert a number in hexadecimal with upper
 * @note: an argument
 * Return: an integer
 */
int op_hexaup(va_list note)
{
	unsigned int l, numb;
	int a, b, j, c;
	char *h;

	c = 0;
	numb = va_arg(note, unsigned int);
	l = numb;
	if (numb == 0)
		return (display('0'));
	while (l != 0)
	{	
		l /= 16;
		c ++;
	}
	h = malloc(c);
	j = 0;
	while (numb != 0)
	{
		a = 0;
		a = numb % 16;
		if (a < 10)
			h[j] = a + '0';
		else
		       h[j] = a + '7';
		numb /= 16;
		j++;
	}
	b = j-1;
	while (b >= 0)
	{
		display(h[b]);
		b--;
	}
	free(h);
	return (c);
}
