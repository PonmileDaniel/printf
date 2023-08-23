#include "main.h"
#include <stdarg.h>
#include <stdio.h>


#define BUFFER_SIZE 1024

int _printf(const char *format, ...)
{
	int i, count = 0, counted_char = 0;
	int flags, width, prec, size, buffer_idx = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (!format)
		return (-1);

	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buffer_idx++] = format[i];
			if (buffer_idx == BUFFER_SIZE)
				buffer_printer(buffer, &buffer_idx);
			counted_char++;
		}
		else
		{
			 buffer_printer(buffer, &buffer_idx);
			 flags = flag_getter(format, &i);
			 prec = get_precision(format, &i, list);
			 width = get_width(format, &i, list);
			 ++i;

			 count = handle_print(format, &i, list, buffer, flags,
					 width, prec, size);
			 if (count == -1)
				 return (-1);
			 counted_char += count;
		}
	}
	buffer_printer(buffer, &buffer_idx);
	va_end(list);
	return(counted_char);
}

/**
 * print_char- print each char in buffer
 * @buffer: the string to be printer
 * @buffer_idx: the buffer string
 * Return: Void
 */

void buffer_printer(char buffer[], int *buffer_idx)
{
	if (*buffer_idx > 0)
		write(1, &buffer[0], *buffer_idx);

	*buffer_idx = 0;
}
