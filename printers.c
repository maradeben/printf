#include "main.h"
#include <stdarg.h>

/**
 * print_char - print a char
 * @arg_list: argument list to select next
 * Return: length of string
 */
int print_char(va_list arg_list)
{
	int next = va_arg(arg_list, int);

	_putchar(next + '0');

	return (1);
}

/**
 * print_string - print a string
 * @arg_list: argument list to select next
 * Return: no return
 */
int print_string(va_list arg_list)
{
	char *s = va_arg(arg_list, char *);
	int i = 0;

	if (s == NULL)
		s = "(nil)";

	while (s[i] != 0)
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}

/**
 * print_decimal - print a float
 * @arg_list: argument list to select next
 * Return: no return
 */
int print_decimal(va_list arg_list)
{
	double n;
	int intpart, length;

	n = va_arg(arg_list, double);
	intpart = (int)n;

	/* print the integer part and get length */
	print_intnum(intpart);
	length = num_length(intpart);

	return (length);
}

/**
 * print_int - print an int
 * @arg_list: argument list to select next
 * Return: no return
 */
int print_int(va_list arg_list)
{
	int n, length;

	n = va_arg(arg_list, int);

	if (n < 0)
		n *= -1;

	print_intnum(n);
	length = num_length(n);

	return (length);
}
