#include "main.h"

/**
 * get_flags - checks for flags
 * @i: the current index in the format string
 * @format: the format string to print the arguments
 * Return: the flags
 */
int get_flags(const char *format, int *i)
{
	int k, prest_int;
	int flags = 0;
	char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (prest_int = *i + 1; format[prest_int] != '\0'; prest_int++)
	{
	for (k = 0; FLAGS_CH[k] != '\0'; k++)
	{
		if (format[prest_int] == FLAGS_CH[k])
		{
			flags |= FLAGS_ARR[k];
			break;
		}
	}

	if (FLAGS_CH[k] == 0)
	{
	break;
	}
	}

	*i = prest_int - 1;

	return (flags);
}
