#include "main.h"

/**
 * print_pct - print the character "%"
 * @args: argument list
 * Return: the character to print
*/
int print_pct(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
