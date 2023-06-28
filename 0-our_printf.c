#include "main.h"

/**
* _printf - prints string while noting specifiers
* @format: a string input
* Return: Returns the value of the string
*/

int _printf(const char *format, ...)
{
	unsigned e = 0;
       	unsigned re_val = 0;
	va_list args;

	va_start(args, format);

	for (; format[e] != '\0'; e++)
	{
		if (format[e] != '%')
		{
			put_char(format[e]);
		}
		else if (format[e + 1] == 'c')
		{
			put_char(va_arg(args, int));
			e++;
		}
		else if (format[e + 1] == 's')
		{
			int rval = _puts_(va_arg(args, char *));

			e++;
			re_val += (rval - 1);
		}
		else if (format[e + 1] == '%')
		{
			put_char('%');
			e++;
		}
		re_val += 1;
	}
	return (re_val);
}
