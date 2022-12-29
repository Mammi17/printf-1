#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * op_bi - function that print a binary number
 * @note: an argument
 * Return: an integer
 */
int op_bi(va_list note)
{
	unsigned int i, j, d, l = 0, bi[32];
	int c = 0;
	char t;

	i = va_arg(note, unsigned int);
	d = 2^32;
	j = 0;
	while (j < 32)
	{
		bi[0] = i/d;
		d /= 2;
		bi[j] = (i / d) % 2;
		l == bi[i];
		if (sum || j == 31)
		{
			t = '0' + bi[j];
			display(t);
			c++;
		}
		i++;
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
	unsigned long int numb, ab;
	int c;


	c = 0;
	numb = va_arg(note, unsigned long int);
	if (numb == 0)
	{
		c = 1;
	}
	ab = numb
	while (ab != 0)
	{
		ab /= 10;
		c++;
	}
	if (numb >= 10)
	{
		op_un(numb / 10);
	}
	display(numb % 10 + '0');
	return (c);
}

/**
 * op_oc - function that prints a number in base 8
 * @note: an argument
 * Return: an integer
 */
int op_oc(va_list note)
{
	unsigned int numb, ab, i, j, m;
	int c;

	c = 0;
	numb = va_arg(note, unsigned long int);
	l = numb;
	i = 1;
	j = 1;
	while (numb > 7)
	{
		numb /= 8;
		j *= 8
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
	}
	if (numb >= 10)
	{
		op_un(numb / 10);
	}
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
	h = (char *) malloc(count * sizeof(char));
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
	b = i-1;
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
	h = (char *) malloc(count * sizeof(char));
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
	b = i-1;
	while (b >= 0)
	{
		display(h[b]);
		b--;
	}
	free(h);
	return (c);
}
