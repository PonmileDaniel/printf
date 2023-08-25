#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
/**
 * _printf - A simplified printf function
 * @format: The formated string containing format specifiers
 * @...: variable number of arguemnt to be formatted
 * Return: Void
 */

int _printf(const char *format, ...)
{
	unsigned int count = 0;
	unsigned int i = 0;
	unsigned int strings_no;
	const char *str;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		if (format[i] == '%' && format[i + 1] == 's')
			count += (print_string(va_arg(args, char *)) - 1);
		if (format[i] == '%' && format[i + 1] == '%')
			_putchar('%');
		count++;
	}
	va_end(args);
	return (count);
}
