#ifndef MAIN_H
#define MAIN_H

#include<stddef.h>
#include <stdarg.h>
#include <stdint.h>

/**
 * struct op - struct
 *
 * @op: the specifier
 * @args: the function associated
 */
int _putchar(char c);
void unsigned_number_to_string(uint64_t number, int base, char *buffer);
void number_to_string(int64_t number, int base, char *buffer);
int _printf(const char *format, ...);
void _puts(char *str);
void print_number(int n);
int _strlen(char *s);
int _isdigit(int c);
int print_c(va_list args);
int print_s(va_list args);
int print_per(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int (*get_func(char x))(va_list);

typedef struct op
{
char *op;
int (*f)(va_list args);
} struc;

#endif /* MAIN_H */
