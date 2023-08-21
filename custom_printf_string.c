#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * custom_printf_string - print string amd return its length
 * @args: The argu list containing the string to be printed.
 * Return: The length of the printed string
 */

int custom_printf_string(va_list args)
{
	const char *str = va_arg(args, const char *);
	int string_length = 0;

	if (str == NULL)
		str = "(null)";
	while (str[string_length] != '\0')
	{
		custom_putchar(str[string_length]);
		string_length++;
	}

	return (string_length);
}
