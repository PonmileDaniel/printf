#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - A simplified printf function
 * @format: The formated string containing format specifiers
 * @...: variable number of arguemnt to be formatted
 * Return: Void
 */


int _printf(const char *format, ...)
{
int count = 0;
const char *s, c;
va_list args;

va_start(args, format);
while (*format)
{
	if (*format == '%')
	{
		format++;
		switch (*format)
		{
			case 'c':
			c = (char) va_arg(args, int);
			_putchar(c);
			count++;
			break;
			case 's':
			s = va_arg(args, const char *);
			while (*s)
			{
				_putchar(*s);
				s++;
				count++;
			}
			break;
			case '%':
			_putchar('%');
			count++;
			break;
			default:
			_putchar('%');
			_putchar(*format);
			count += 2;
			break;
		}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}
