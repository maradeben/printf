#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>
#include <stdarg.h>

int (*check_format(const char *format))(va_list);
int print_char(va_list arg_list);
int print_int(va_list arg_list);
int print_decimal(va_list arg_list);
int print_string(va_list arg_list);
int print_pct(va_list arg_list);

int _printf(const char * const format, ...);

/**
 * struct type_print - map format and print function
 * @c: char representing the format
 * @printer: the print function
 */

typedef struct type_print
{
	char *c;
	int (*printer)(va_list);
} t_p;

/* helper functions */
int _putchar(char c);
int num_length(int n);
void print_intnum(int n);

#endif /* _MAIN_H_ */
