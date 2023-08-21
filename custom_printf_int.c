#include "main.h"
#include <stdbool.h>
#include <stdio.h>

/**
 * print_positive - Print a positive int 
 * @n: The positive int to print.
 * Return: THe number of char printed
 */
int custom_print_positive(int n)
{
	int digits;

	if (n == 0)
		return (0);

	digits = custom_print_positive(n / 10);
	_putchar(n % 10 + '0');
	return (digits + 1);
}
