#include <stdarg.h>
#include <stddef.h>
#include "main.h"

int _printf(const char *format, ...)
{
	int count = 0, i;
	int (*b)(va_list);
	va_list args;
	va_start(args, format);
	if (format != NULL)
	{
		if (format != NULL && format[1] == '\0')
		{
			return (-1);
		}
		while (format[0] == '%' && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] != '%')
				{
					count += _putchar(format[i]);
					i += 2;
				}
				else
				{
					b = get_func(format[i + 1]);
					if (b)
						count += b(args);
					else
						count = _putchar(format[i]) + _putchar(format[i + 1]);
					i = i + 2;
				}
			}
		}
		else
		{
			count += _putchar(format[i]);
			i++;
		}
	va_end(args);
	return (count);
	}
	return (-1);
}
