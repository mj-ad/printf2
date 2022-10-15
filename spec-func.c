#include "main.h"

/**
 *printc - prints char
 *@args: va_list
 *@format: format
 *
 * Return: number for char
 */

int printc(va_list args)
{
	int c;
	c = va_args(args, int);
	return (_putchar(c));

