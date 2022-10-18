#ifndef MAIN_H
#define MAIN_H

#include<stddef.h>
#include <stdarg.h>
#include <stdint.h>

/**
 * struct sp - struct
 *
 * @sp: the specifier
 * @f: the function associated
 */
typedef struct sp
{
	char *sp;

	int (*f)(va_list);
} struc;

int _putchar(char c);
void unsigned_number_to_string(uint64_t number, int base, char *buffer);
void number_to_string(int64_t number, int base, char *buffer);
int _printf(const char *format, ...);
void _puts(char *str);
void print_number(int n);
int _strlen(char *s);
int _isdigit(int c);

#endif /* MAIN_H */
