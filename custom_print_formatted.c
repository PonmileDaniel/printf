#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * custom_print_formatted - A simplified printf function
 * @format:The formated string containing format specifiers
 * @...: variable number of arguemnt to be formatted
 * Return : Void
 */

int custom_print_formatted(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int printed_chars = 0;

	while (*format)
	{
		if (*format == "%")
		{
			format++;

			if (*format == "c")
			{
				_putchar(va_arg(args, int));
				printed_chars++;
			}
			else if (*format == "s")
			{
				char *str = va_args(args, char*);
				while (*str)
				{
					_putchar(*str);
					printed_chars++;
					str++;
				}
			}
			else if  (*format == "d")
			{
				print_int(va_arg(args, int));
			}
			else
			{
				_putchar("%");
				_putchar(*format);
				printed_chars += 2;
			}
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}
		format++;
	}
	va_end(args);
}

/**
 * print_int - Custom function to print an integer
 * @num: The integer to be Printed.
 *
 */
void print_int(int num)
{
	if (num == 0)
	{
		_putchar ('0');
		return;
	}

	int is_negative = 0;

	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}

	char num_str[20];

	int index = 0;

	while (num > 0)
	{
		num_str[index++] = '0' + (num % 10);
		num /= 10;
	}

	if (is_negative)
	{
		_putchar ("-");
	}

	for (int i = index - 1; i >= 0; i--)
	{
		_putchar (num_str[i]);
	}
}
