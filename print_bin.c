#include "main.h"

/**
 * print_bin - print the binary format of number passed
 * @arg_list: argument list
 * Return: the character to print
*/
int print_bin(va_list arg_list)
{
	int dec = va_arg(arg_list, int);
	int length = 0, bin;

	while (dec > 0)
	{
		bin = dec % 2;
		dec = dec / 2;
		_putchar('0' + bin);
		length += 1;
	}
	return (length);
}
