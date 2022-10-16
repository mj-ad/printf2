#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that prints the arguments passed into it.
 *
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0, j = 0;

	if (argc == 1)
		printf("%d\n", sum);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
