#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int ret_val1, ret_val2;
/*	char letter = 'E';*/
	char str[] = "Elijah and Dimpho";

	_puts_("\n****Using the new _printf****\n");
	ret_val1 = _printf("\nthe team members are: %s\n", str);
	_printf("the team members are: %s\n", str);
	printf("the return value is: %d\n", ret_val1);

	_puts_("\n****Using the old printf****\n");
	ret_val2 = printf("\nthe team members are: %s\n", str);
	printf("the team members are: %s\n", str);
	printf("the return value is: %d\n", ret_val2);

	return (0);
}
