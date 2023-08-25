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
	unsigned int string_no;
	const char *str;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str = va_arg(args, char *);
			string_no = putsss((char *)str);
			count += (string_no - 1);
			i++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
		}
		count++;
	}
	va_end(args);
	return (count);
}
