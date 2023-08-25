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
	char current_char;

	va_list args;

	va_start(args, format);

	enum State
	{
		STATE_NORMAL,
		STATE_PERCENT,
	};

	enum State state = STATE_NORMAL;

	for (i = 0; format[i] != '\0'; i++)
	{
		char current_char = format[i];

		switch (state)
		{
			case STATE_NORMAL:
				if (current_char != '%')
				{
					_putchar(current_char);
					count++;
				}
				else
				{
					state = STATE_PERCENT;
				}
				break;

			case  STATE_PERCENT:
				if (current_char == 'c')
				{
					_putchar(va_arg(args, int));
				}
				else if (current_char == 's')
				{
					const char *str = va_arg(args, const char *);

					count += putsss(str);
				}
				else
				{
					_putchar('%');
					_putchar(current_char);
				}

				state = STATE_NORMAL;
				break;
		}
	}
}
