#include "main.h"

/**
 * print_char - prints a character
 * @val: argument 
 * return: 0
 */

int print_char(va_list val){
	char s;

	s = va_arg(val, int);
	_putchar(s); 
	return(0);
