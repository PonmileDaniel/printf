#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * custom_print_formatted - A simplified printf function
 * @format: The formated string containing format specifiers
 * @...: variable number of arguemnt to be formatted
 * Return: Void
 */



int _printf(const char *format, ...)
{
	int count = 0;
	char c;
	char *ptr = NULL;
	char *str = NULL;

	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);
	ptr = format;
	 
	 while (*ptr != '\0')
	 {
		 if (*ptr == '%')
			 *ptr++;
		 if (*ptr == 'c')
		 {
			 c = (char)va_arg(args, int);
			 _putchar(c);
			 count++;
		 }
		 else if (*ptr == 's')
		 {
			 str = va_arg(args, char*);
			 while (*str !='\0')
			 {
				 _putchar(*str);
				 str++;
				 count++;
			 }
		 }
		 else if (*ptr == '%')
		 {
			 _putchar('%');
			 count++;
		 }
		 else
		 {
			 _putchar(*ptr);
			 count++;
		 }
		 ptr++;
	 }
	 va_end(args);
	 return count;
}
