#include "main.h"

/**
 * print_decimal - print a float
 * @arg_list: argument list to select next
 * Return: no return
 */
int print_decimal(va_list arg_list)
{
	int n;
	int length;

	n = va_arg(arg_list, int);

	if (n < 0)
		n *= -1;

	print_intnum(n);
	length = num_length(n);

	return (length);
}