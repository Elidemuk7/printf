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
	char letter1 = 'E';
	char letter2 = 'D';
	char str[] = "Elijah and Dimpho";

	_puts_("\n****Using the new _printf****\n");
	ret_val1 = _printf("the team members are: %c 50%%, %c 50%% %s\n", letter1, letter2, str);
	_printf("the team members are: %c 50%%, %c 50%% %s\n", letter1, letter2, str);
	printf("the return value is: %d\n", ret_val1);

	printf("\n****Using the old printf****\n");
	ret_val2 = printf("the team members are: %c 50%%, %c 50%% %s\n", letter1, letter2, str);
	printf("the team members are: %c 50%%, %c 50%% %s\n", letter1, letter2, str);
	printf("the return value is: %d\n", ret_val2);

	return (0);
}
