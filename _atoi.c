#include "main.h"
/**
 * _atoi - converts strings to integer
 * @str: the string to convert
 */
int _atoi(char* str)
{
    int res = 0;
    int i;
    for (i = 0; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';
 
    return (res);
}
