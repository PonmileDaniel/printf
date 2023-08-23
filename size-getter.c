#include "main.h"

/**
 * get_size - Check and calc size for casting int
 * @format: string format
 * @i: arg int
 * Return: size
 */
int get_size(const char *format, int *i)
{
	int curr_int = *i + 1;
	int size = 0;

	if (format[curr_int] == 'l')
		size = S_LONG;
	else if (format[curr_int] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_int - 1;
	else
		*i = curr_int;

	return (size);
}
