#include "main.h"

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
