#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
/**
 * custom_print_formatted - A simplified printf function
 * @format: The formated string containing format specifiers
 * @...: variable number of arguemnt to be formatted
 * Return: Void
 */

int custom_print_formatted(const char *format, ...)
{
	int length = 0;
	int printed = 0;
	size_t i;
	va_list args;
        va_start(args, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			length++;
		}
		else
		{
			format++;

			for (i = 0; i < NUM_CONVERTERS; i++)
			{
				if (*format == m[i].specifier)
				{
					printed = m[i].f(args);
					length += printed;
					break;
				}
			}
			if (printed == 0)
			{
				_putchar('%');
				_putchar(*format);
				length += 2;
			}
		}
		format++;
	}
	va_end(args);
	return (length);
}
