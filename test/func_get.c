#include "main.h"

int (*func_get(char *c))(va_list)
{
	int i = 0;

	struc arr[] = {
	{"c", printc},
	{"s", prints},
	{"%", printper},
	{NULL, NULL}
	};

	while (arr[i].op)
	{
		if (c == arr[i].sp[0])
			break;
		i++;
	}

	return (arr[i].f);
}

