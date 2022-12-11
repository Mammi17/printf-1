#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * display - entry block
 * @c: an character
 * Return: an integer
 */
int display(char c)
{
	return (write(1, &c, 1));
}
