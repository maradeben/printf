#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: main function
 * Return: 0 on success
 */

int main(void)
{
	int len, len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = _printf("Length:[%d, %i]\n", len, len);
	len = _printf("Try char: %c and string: %s and another number: %i\n", 'x', "A string", len2);
	len2 = _printf("Percent: [%%]\n");
	return (0);
}
