#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


typedef struct
{
	char specifier;
	void (*print_function)(va_list);
} FormatSpecifier;

int _printf(const char *format, ...);
int _putchar(char c);
void custom_print_formatted(const char *format, ...);






#endif
