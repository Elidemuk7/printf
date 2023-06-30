#include "main.h"

/**
 * print_digits - Recursively prints the digits of a given number.
 * Description: A program to demonstrate the print_digits function
 * and a code snippet to insert in a printf file.
 * @num: The number whose digits are to be printed.
 *
 * Return:
 **/

void print_digits(int num)
{
	int n;

	if (num == 0)
		return;

	n = num / 10;

	print_digits(n);
	put_char(num % 10 + '0');

	return;
}
