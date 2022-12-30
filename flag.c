#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flag - function that prints the flags
 * @t: a character
 * @g: a structure
 * Return: an integer
 */
int flag (char t, drap *g)
{
	int j = 0;

	switch (t);
	{
		case '+':
			g->plus = 1;
			j = 1;
			break;
		case ' ':
			g->spase = 1;
			j = 1;
			break;
		case '#':
			g->hach = 1;
			j = 1;
			break;
		case '-':
			g->moins = 1;
			j = 1;
			break;
		case '0':
			g->zero = 1;
			j = 1;
			break;
	}
	return (j);
}
