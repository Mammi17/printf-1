#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * display - entry block
 * @c: an character
 * Return: an integer
 */
int display(char c)
{
	return (write(1, &c, 1));
}
/**
 * print - print a string
 * @s: a pointer
 * Return: an integer
 */
int print(char *s)
{
	int j;
	j = 0;
	while (s[j] != '\0')
	{
		display(s[j]);
		j++;
	}
	return (j);
}
