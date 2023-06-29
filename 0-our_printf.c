#include "main.h"

/**
* _printf - prints string while noting specifiers
* @format: a string input
* Return: Returns the value of the string
*/

int _printf(const char *format, ...)
{
	unsigned int pos = 0;
	unsigned int re_val = 0;
	va_list args;

	va_start(args, format);

	for (; format[pos] != '\0'; pos++)
	{
		if (format[pos] != '%')
		{
			put_char(format[pos]);
		}
		else if (format[pos + 1] == 'c')
		{
			put_char(va_arg(args, int));
			pos++;
		}
		else if (format[pos + 1] == 's')
		{
			int rval = _puts_(va_arg(args, char *));

			pos++;
			re_val += (rval - 1);
		}
		else if (format[pos + 1] == '%')
		{
			put_char('%');
/*			pos++;*/
		}
		re_val += 1;
	}
	return (re_val);
}
