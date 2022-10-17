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
	int i, j, length = 0; /* total length to return */
	char escape[] = {'\"', '\'', '\\'};

	t_p printers[] = {
		{"c", print_char},
		{"i", print_int},
		{"d", print_decimal},
		{"s", print_string}
	};
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 4; j++)
			{
				if (format[i + 1] == *(printers[j].c))
					length += printers[j].printer(args);
			}
		i++; /* skip the next character, format[i + 1] */
		}
		else if (format[i] == '\\')
		{
			for (j = 0; j < 3; j++)
			{
				if (format[i + 1] == escape[j])
					_putchar(escape[j]);
			}
			i++; /* skip the next character */
			length += 1;
		}
		_putchar(format[i]);
		length += 1;
	}
	va_end(args);
	return (length);
}
