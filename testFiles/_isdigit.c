#include "main.h"
/**
 * _isdigit - Write a function that checks for digits.
 * @c: The character to check
 *
 * Return: Always Success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
