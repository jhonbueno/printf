#include <stdarg.h>
#include "main.h"

/**
 * _printf - printf function
 *
 * @format: format
 *
 *
 * Return: integer
 */


match_t specifiers_list[] = {
	{'s', print_string},
	{'c', print_char},
	{'%', print_percent}};

int _printf(const char *format, ...)
{
	int (*ptrfunction)(va_list);
	unsigned int flags = 3;
	unsigned int i;
	int counter = 0;
	const char *str_format;
	va_list ap;

	va_start(ap, format);

	if (format == NULL)
		return (-1);

	for (str_format = format; *str_format != '\0'; str_format++)
	{
		if (*str_format == '%')
		{
			str_format++;

			for (i = 0; i < flags ; i++)
			{
				if (specifiers_list[i].esp == *str_format)
					ptrfunction = specifiers_list[i].fp;
			}
			counter += ptrfunction(ap);
		}
		else
			counter += _putchar(*str_format);
	}

	va_end(ap);
	return (counter);
}
