#include "main.h"

/**
 * is_printable- check for printable
 * @c: char
 * Return: it
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ascci in hexadecimal code buffer
 * @buffer: Array of chars
 * @i: Index to start appending
 * @ascii_code: ASCII CODE
 * Return: 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Verifies if a value is digit
 * @c: Char 
 *
 * Return: 1  or 0
 */
int is_digit(char c)
{
	if (c <= '9' && c >= '0' )
		return (1);

	return (0);
}

/**
 * convert_size_number - size converter
 * @nums: Number to be casted.
 * @size: Number of type casted
 *
 * Return: Num as casted Vals
 */
long int convert_size_number(long int nums, int size)
{
	if (size == S_LONG)
		return (nums);
	else if (size == S_SHORT)
		return ((short)nums);

	return ((int)nums);
}

/**
 * convert_size_unsgnd - make cast number to size
 * @nums: Number to be casted
 * @size: Number of type casted
 *
 * Return: Num as casted val
 */
long int convert_size_unsgnd(unsigned long int nums, int size)
{
	if (size == S_LONG)
		return (nums);
	else if (size == S_SHORT)
		return ((unsigned short)nums);

	return ((unsigned int)nums);
}
