#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>

int _printf(const char * const format, ...);
int (*check_format(const char *format))(va_list);
int print_char(va_list arg_list);
int print_int(va_list arg_list);
int print_decimal(va_list arg_list);
int print_string(va_list arg_list);
int print_pct(va_list arg_list);

/**
 * struct type_printers - map format and print function
 * @c: char representing the format
 * @printer: the print function
 */
typedef struct type_printers
{
	char *c;
	int (*printer)(va_list);
} t_p;

int _printf(const char *format, ...);
int print_char(va_list);
int print_str(va_list);
int print_int(va_list);
int print_decimal(va_list);
int print_pct(va_list);

/* helper functions*/
int _putchar(char c);
int num_length(int n);
void print_intnum(int n);

#endif  /* _MAIN_H */
