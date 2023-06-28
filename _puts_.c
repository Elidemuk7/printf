#include "main.h"
/**
 * _puts_ - function prints all the chars of a string
 *
 * Description: function prints char of a string
 *
 * @string: char pointer
 *
 * Return: the number of chars printed
 */
int _puts_(char *string)
{
	int str_point;

	if (string == 0)
		string = "(null)";

	for (str_point = 0; string[str_point] != '\0'; str_point++)
		put_char(string[str_point]);

	return (str_point);
}
