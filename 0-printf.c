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
	int i, j, length = 0; /* total length to return */
	char escape[] = {'\"', '\'', '\\'};

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			f = check_format(&format[i + 1]);
			length += f(args);
			i += 2; /* skip the next character, format[i + 1] */
		}
		else if (format[i] == '\\')
		{
			for (j = 0; j < 3; j++)
			{
				if (format[i + 1] == escape[j])
					_putchar(escape[j]);
			}
			i += 1; /* skip the next character */
			length += 1;
		}
		_putchar(format[i]);
		length += 1;
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
