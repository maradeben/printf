#include "main.h"

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