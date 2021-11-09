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
int _printf(const char *format, ...)
{
	int (*ptrfunction)(va_list);
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

			ptrfunction = get_function(*str_format);
			counter += ptrfunction(ap);
		}
		else
			counter += _putchar(*str_format);
	}

	va_end(ap);
	return (counter);
}


/**
 * get_function - get the function corresponding to especifier
 * @s: char especifier
 * Return: return a function corresponding to especifier
 */
int (*get_function(char s))(va_list)
{
	match_t specifiers_list[] = {
		{'s', print_string},
		{'c', print_char},
		{'%', print_percent}};

	int flags = 3;
	int i;

	for (i = 0; i < flags ; i++)
	{
		if (specifiers_list[i].esp == s)
			return (specifiers_list[i].fp);
	}
	return (NULL);
}
