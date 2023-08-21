#include "main.h"
/**
 * _putchat - This write the char c to stdout
 * @c: THe cha to be printed
 * Return:0 if Successsfu
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
