#include "main.h"

/**
 * print_pct - print the character "%"
 * @arg_list: argument list
 * Return: the character to print
*/
int print_pct(va_list arg_list)
{
	(void)arg_list;
	return (_putchar('%'));
}
