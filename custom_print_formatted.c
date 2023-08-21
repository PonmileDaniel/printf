#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * custom_print_formatted - A simplified printf function
 * @format: The formated string containing format specifiers
 * @...: variable number of arguemnt to be formatted
 * Return: Void
 */

int custom_print_formatted(const char *format, ...)
{
	if (format == NULL)
		return (-1);
	va_list args;

	va_start(args, format);
	int length = 0;

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
			int printed = 0;
			size_t i;

			for (i = 0; i < NUM_CONVERTERS; i++)
			{
				if (*format == m[i].id)
				{
					printed = m[i].f(args);
					length += printed;
					break;
				}
			}
			if (printed == 0)
			{
				_putchar("%");
				_putchar(*format);
				length += 2;
			}
		}
		format++;
	}
	va_end(args);
	return (length);
}
