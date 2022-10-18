#include <stdarg.h>
#include "main.h"

int (*func_get(char c))(va_list)
{
int i = 0;
struc arr[] = {
{"c", print_c},
{"s", print_s},
{"%", print_per},
{"d", print_d},
{"i", print_i}
};
while (arr[i].op)
{
if (c == arr[i].op[0])
return (arr[i].f);
i++;
}
return (NULL);
}

