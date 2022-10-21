#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

int (*check_format(const char *format))(va_list);
int print_char(va_list arg_list);
int print_int(va_list arg_list);
int print_decimal(va_list arg_list);
int print_string(va_list arg_list);
int print_pct(va_list arg_list);

int _printf(const char * const format, ...);

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct type_printers
{
	char *c;
	int (*printer)(va_list);
} t_p;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

#endif  /* _MAIN_H */
