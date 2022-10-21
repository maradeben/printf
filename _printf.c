#include <stdlib.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - printf analog
 * @format: the string to format
 * Return: the length of the string printed, i.e. number of characters
 */

int _printf(const char *format, ...)
{
	va_list args; /* the list of optional arguments */
	int (*f)(va_list); /* function pointer */
	int i, length = 0; /* total length to return */

	va_start(args, format);

	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			f = check_format(&format[i + 1]);
			if (f)
			{
				length += f(args);
				i += 1; /* skip the next character, format[i + 1] */
			}
			else
			{
				_putchar(format[i]);
				length += 1;
			}
		}
		else
		{
			_putchar(format[i]);
			length += 1;
		}
	}
	va_end(args);
	return (length);
}

/**
 * check_format - get format specifier
 * @c: char representing the format
 * Return: function to print specified format
 */
int (*check_format(const char *c))(va_list)
{
	int i;
	t_p printers[] = {
			{"c", print_char},
			{"i", print_int},
			{"d", print_decimal},
			{"s", print_string},
			{"%", print_pct},
			{NULL, NULL}
		};

	for (i = 0; i < 5; i++)
	{
		if (*c == *(printers[i].c))
			return (printers[i].printer);
	}

	return (NULL);
}
