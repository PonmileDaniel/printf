#include "main.h"

/**
 * putsss - Prints strings with byte number
 * @c: string
 * Return: int
 */
int putsss(char *c)
{
	int count = 0;

	while (*c != '\0')
	{
		_putchar(*c);
		c++;
		count++;
	}

	return (count);
}
