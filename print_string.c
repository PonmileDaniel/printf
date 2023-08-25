#include "main.h"
#include <stdio.h>


/**
 * print_string- printing string tool
 * @str: pointer to string in args
 * Return: Int
 */

int print_string(char *str)
{
	unsigned int i = 0;

	while (str != '\0')
	{
		_putchar(str);
		str++;
		i++;
		return (i++);
	}
}
