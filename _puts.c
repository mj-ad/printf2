#include "main.h"
/**
 * _puts - a function that prints a string,
 * followed by a new line, to stdout
 *
 * @str: the string to print
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
