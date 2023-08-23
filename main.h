#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


typedef struct
{
	char specifier;
	int (*f)(va_list);
} Converter;

extern Converter m[];
extern size_t NUM_CONVERTERS;

int custom_putchar(char c);
int _printf(const char *format, ...);
int _putchar(char c);
int custom_printf_string(va_list args);
int custom_print_formatted(const char *format, ...);
int get_flags(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
int get_width(const char *format, int *i, va_list list);


#endif
