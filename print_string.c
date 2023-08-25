#include "main.h"
#include <stdio.h>


/**
 * print_string- printing string tool
 * @str: pointer to string in args
 * Return: int
 */

int print_string(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}
