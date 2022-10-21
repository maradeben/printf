#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * num_length - get length of a number
 * @n: the number
 * Return: the length
 */

int num_length(int n)
{
	int l = 0;

    if (n < 0)
    {
        n *= -1;
        l += 1;
    }
        
    while (n > 0)
	{
		l += 1;
		n = n / 10;
	}

	return (l);
}

/**
 * print_intnum - short program
 * @n: number to print
 * Return: no return
 */
void print_intnum(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10)
		print_intnum(n / 10);

	_putchar(n % 10 + '0');
}
