#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: list of types of arguments passed to the function
 * Return: a count of the total strings printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list print_any;
	char *double_num;

	va_start(print_any, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%' && format[i - 1] != '%')
			_putchar(format[i]);
		if (format[i] == '%' && format[i + 1] == 'i')
		{
			int_num = va_arg(print_any, int);
			print_number(int_num);
		}
		if (format[i] == '%' && format[i + 1] == 'd')
		{
			double_num = va_arg(print_any, double);
			print_number(double_num);
		}
	}
}
	
