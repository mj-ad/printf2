#include "main.h"
/**
 * main - for testing our codes
 *
 * Return: zero
 */
int main(void)
{
	char *name;

	name = "Charles Darwin";

	_printf("Let's try to printf a simple sentence.\n");

	_printf("My name is %c %s.\n", 'A', name);

	_printf("Let's try %%%%%5%%%% mod\n");

	return (0);
}
