#include "main.h"

/**
 * putsss - String
 * @c : string
 * Return : number of byte
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
