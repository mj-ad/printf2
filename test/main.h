#ifndef MAIN_H
#define MAIN_H

#include<stddef.h>
#include <stdarg.h>
#include <stdint.h>

int _putchar(char c);
void unsigned_number_to_string(uint64_t number, int base, char *buffer);
void number_to_string(uint64_t number, int base, char *buffer);
int _vprintf(const char *format, va_list args);
int _printf(const char *format, ...);
void _puts(char *str);
void print_number(int n);
int _strlen(char *s);
int _isdigit(int c);

#endif /* MAIN_H */
