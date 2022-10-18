#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: list of types of arguments passed to the function
 * Return: a count of the total strings printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, len = 0, flag = 1;
	va_list print_any;
	char *str, ch;

	va_start(print_any, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%' && format[i - 1] != '%')
			_putchar(format[i]);
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			ch = va_arg(print_any, int);
			_putchar(ch);
			count = count + 1;
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			str = va_arg(print_any, char *);
			if (str != NULL)
			{
				_puts(str);
				len = _strlen(str);
			}
			count = count + len;
		}
		if (format[i] == '%' && format[i + 1] == '%')
		{
			if (flag)
				_putchar('%');
			flag = !flag;
		}
		i++;
	}
	va_end(print_any);

	return (count);
}
