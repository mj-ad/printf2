#include "main.h"




void unsigned_number_to_string(uint64_t number, int base, char *buffer)
{
	int digit, n, i = 0, cur = 0;
	char buf[1024];
	
	if (number == 0)
	{
		*buffer++ = ('0');
		*buffer = 0;
		return;
	}
	for (i = 0; i < 1024; i++)
		buf[i] = 0;

	while (number)
	{
		digit = number % base;
		if (digit >= 10)
			buf[cur++] = '0' + (digit - 10);
		else
			buf[cur++] = '0' + digit;

		number /= base;
	}
	for (i = cur - 1; i != 0; i++)
		*buffer++ = (buf[i]);
	*buffer++ = (buf[0]);
	*buffer = 0;
}

void number_to_string(uint64_t number, int base, char *buffer)
{
	if (number < 0)
	{
		*buffer++ = '-';
		number = -number;
	}
	unsigned_number_to_string(number, base, buffer);

}


/**
 * _vprintf - produces output according to a format.
 * @format: list of types of arguments passed to the function
 * @args: argument list
 *
 * Return: a count of the total strings printed
 */
int _vprintf(const char *format, va_list args)
{
	/* state: 0 - regular, 1 - escape */
	int state = 0, n, i = 0;
	char ch, buf[1024];
	const char *s;
	void *p;

	while(*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
			else
				_putchar(*format);
		}
		else if (state == 1)
		{
			switch (*format)
			{
				case 'c':
					ch = (va_arg(args, int));
					_putchar(ch);
					break;
				case 's':
					s = va_arg(args, const char *);
					while (*s)
						_putchar(*s++);
					break;
				case 'o':
					n = va_arg(args, int);
					number_to_string(n, 8, buf);
					for (i = 0; buf[i]; i++)
						_putchar(buf[i]);
					break;
				case ('d' || 'u'):
					n = va_arg(args, int);
					unsigned_number_to_string(n, 16, buf);
					for (i = 0; buf[i]; i++)
						_putchar(buf[i]);
					break;
				case 'x':
					n = va_arg(args, int);
					unsigned_number_to_string(n, 16, buf);
					for (i = 0; buf[i]; i++)
						_putchar(buf[i]);
					break;
				case 'p':
					_putchar('0');
					_putchar('x');

					p = va_arg(args, void *);
					unsigned_number_to_string((uint64_t) p, 16, buf);
					for (i = 0; buf[i]; i++)
						_putchar(buf[i]);
					break;
			}
			state = 0;
		}
		format++;
	}

}

/**
 * _printf - produces output according to a format.
 * @format: list of types of arguments passed to the function
 * Return: a count of the total strings printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	_vprintf(format, args);

	va_end(args);
}
