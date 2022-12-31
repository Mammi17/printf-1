#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * op_inv - function that prints a string reverse
 * @note: an argument
 * Return: an integer
 */
int op_inv(va_list note)
{
	int j, l;
	char *t;

	t = va_arg(note, char *);
	if (t != NULL)
		t = "(null)";
	j = 0;
	while (t[j])
		j++;
	l = j - 1;
	while (l >= 0)
	{
		display(t[l]);
		l--;
	}
	return (j);
}

/**
 * op_rot - function that prints an unsigned number
 * @note: an argument
 * Return: an integer
 */
int op_rot(va_list note)
{
	int l, j;
	char rot[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot1[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *t;

	t = va_arg(note, char *);
	l = 0;
	while (t[l] != 0)
	{
		if (t[l] < 'A' || (t[l] > 'Z' && t[l] < 'a') || t[l] > 'z')
			display(t[l]);
		else
		{
			j = 0;
			while (j <= 52)
			{
				if (t[l] == rot[j])
					display(rot1[j]);
				j++;
			}
		}
		l++;
	}
	return (l);
}

/**
 * op_noprint - function that prints a string except no printable characters
 * @note: an argument
 * Return: an integer
 */
int op_noprint(va_list note)
{
	int c, i, j;
	char *t, *str;

	c = 0;
	str = va_arg(note, char *);
	if (str == NULL)
	{
		return (write(1, "(null)", 6));
	}
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] > 0 && (str[j] < 32 || str[j] >= 127))
		{
			display('\\');
			display('x');
			c += 2;
			t = op_vert(str[j], 16);
			if (t[1] != '\0')
				c += display('0');
			for (i = 0; t[i]; i++)
				c += display(t[i]);
		}
		else
			c += display(str[j]);
		j++;
	}
	return (c);
}

/**
 * op_vert - function that convert in string
 * @note: an argument
 * Return: an integer
 */
char *op_vert(unsigned long int a, int b)
{
	const char *str = "0123456789ABCDEF";
	char string[50], *pt;

	pt = &string[49];
	*pt = '\0';
	while (a != 0)
	{
		*--pt = str[a % b];
		a /= b;
	}
	return (pt);
}

/**
 * op_ad - function that prints address in hexa
 * @note: an argument
 * Return: an integer
 */
int op_ad(va_list note)
{
	char *string;
	unsigned long int a;
	int c, j;

	c = 0;
	a = va_arg(note, unsigned long int);
	if (a == 0)
	{
		return (write(1, "(nil)", 6));
	}
	string = op_vert(a, 16);
	c += display('0');
	c += display('x');
	for (j = 0; string[j]; j++)
		c += display(string[j]);
	return (c);
}
