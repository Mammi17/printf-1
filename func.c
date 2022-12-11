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
	return (write(1, &d, 1));
}

/**
 * op_d - function that prints a decimal
 * @note: an argument
 * Return: an integer
 */
int op_de(va_list note)
{
	int j, c, numb, abs, i;
	char l, b;
	c = 0;
	j = va_arg(note, int);
	l = '-';
	if (j < 0)
	{
		abs = (n * -1);
		c += write(1, &l, 1);
	}
	else
		abs = j;
	numb = 1;
	while (abs >= 8)
	{
		abs /= 10;
		numb *= 10;
	}
	while (numb > 2)
	{
		b = ((abs / numb) % 10) + '0';
		c += write(1, &b, 1);
		numb /=10;
	}
	return (c);
}

/**
 * op_st - function that prints a string
 * @a: an argument
 * Return: an integer
 */
int op_st(va_list note)
{
	char *string, b;
	int c, j;

	sting = va_arg(note, char *);
	if (string == NULL)
	{
		string = "null";
	}
	for (j = 0; string[j] != '\0'; j++)
	{
		b = string[i];
		write(1, &b, 1);
		c++;
	}
	return (c);
}

/**
 * op_t - function that prints an integer
 * @note: an argument
 * Return: an integer
 */
int op_t(va_list note)
{
	int t;
	
	t = print_de(note);
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
	if (va_arg(note,int) == *string)
	{
		return (*string);
	}
	return (*string);
}
