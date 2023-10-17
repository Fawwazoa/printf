#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef struct types_arguments
{
	char t;
	int (*f)(va_list va);
} types;
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list val);
int print_str(va_list va);
int print_prc(void);
int print_num(va_list va);
int print_binary(va_list va);
int print_unsnum(va_list va);
int print_oc(va_list va);
int print_hexa(va_list va);
int hexa_upper(va_list va);

#endif
