#include "main.h"

/**
 * print_bin - print the binary format of number passed
 * @arg_list: argument list
 * Return: the length of binary
*/
int print_bin(va_list arg_list)
{
	int dec = va_arg(arg_list, int);
	int i = 0, length = 0, bin;
	int result[300];


	while (dec > 0)
	{
		bin = dec % 2;
		dec = dec / 2;
		result[i++] = bin;
		length += 1;
	}

	i -= 1;
	while (i >= 0)
	{
		_putchar(result[i] + '0');
		i--;
	}
	return (length);
}
