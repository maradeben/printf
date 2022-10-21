#include "main.h"

/**
 * print_char - print a char
 * @arg_list: argument list to select next
 * Return: length of string
 */
int print_char(va_list arg_list)
{
	int next = va_arg(arg_list, int);

	_putchar(next);

	return (1);
}
