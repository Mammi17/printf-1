#include <stdio.h>
#include "main.h"
/**
 * display - entry block
 * @c: an character
 * Return: an integer
 */
int display(char c)
{
	return (fwrite(1, &c, 1));
}
