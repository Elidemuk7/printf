#include "main.h"
/**
 * _puts_ - function prints all the chars of a string, followed by a new line
 *
 * Description: function prints char of a string
 *
 * @string: char pointer
 *
 * Return: the number of chars printed (excluding the null byte)
 */
int _puts_(char *string)
{
	int count = 0;

	if (string == NULL)
		string = "(null)";

	for (; *string != '\0'; string++)
	{
		count += put_char(*string);
	}
	return (count);
}
