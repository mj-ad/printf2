#include "main.h"
#include <stdarg.h>

/**
 *print_c - prints char
 *@args: arguments
 *Return: counted character num
 */

int print_c(va_list args)
{
	  int c;
	  c = va_arg(args, int);
	  return (_putchar(c));
}

/**
 *print_s - prints string
 *@args: arg
 *Return: count
 */
int print_s(va_list args)
{
	int s, count = 0;
	char *num;

	s = 0;
	num = va_arg(args, char*);
	if (num == NULL)
	  {
	    num = "NULL";
	  }
	while (num[s] != '\0')
	  {
	    _putchar(num[s]);
	    s++;
	    count++;
	  }
	return (count);
}

/**
 *print_per - prints %
 *@args: arg
 *Return: count
 */

int print_per(va_list args)
{
  int p;
  p = va_arg(args, int);
  return (_putchar(p));
}

/**
 *print_d - prints decimal
 *@args: arg
 *Return: count
 */

int print_d(va_list args)
{
unsigned int abs, aux, num;

int a;

count = 0;

a = va_arg(print_any, int);

if (a < 0)
  
  {
    
    abs = (a * -1);
    
    count += _putchar('-');
    
  }

 else
   
   {
     
     abs = a;
     
   }

aux = abs;

num = 1;

while (aux > 9)
  
  {
    
    aux = aux / 10;
    
    num = num * 10;
    
  }

while (num >= 1)
  
  {
    
    count += _putchar(((abs / num) % 10) + '0');
    
    num = num / 10;
    
  }

return (count);
}

/**
 *print_i - prints integer
 *
