#include "main.h"

int (*func_get(char c))(va_list)
{
int i = 0;
struc arr[] = {
{"c", printc},
{"s", prints},
{"%", printper}
};
while (arr[i].op)
{
if (c == arr[i].op[0])
return (arr[i].f);
i++;
}
return (NULL);
}

