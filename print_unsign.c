#include "main.h"


/**
 * print_num - Entry point
 *@va: the integer to print
 * Return: no return
 */
int print_unsnum(va_list va)
{
	int i, len, r, l;
	unsigned int abs, num, numt;
	int n = va_arg(va, int);

	len = 0;
	i = 0;
	r = 1;
	l = 1;
	if (n < 0)
	{
		_putchar('-');
		len++;
		abs = -n;
	} else
	{
		abs = n;
	}

	num = abs;
	while (num > 0)
	{
		num /= 10;
		i++;
	}

	while (r < i)
	{
		l *= 10;
		r++;
	}
	while (l >= 1)
	{
		numt = (abs / l) % 10;
		_putchar(numt + '0');
		len++;
		l /= 10;
	}
	return (len);
}
