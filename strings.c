#include "main.h"

/**
 * print_string - print string
 * @list: va_list
 *
 *
 * Return: integer
 */

int print_string(va_list list)
{
	int i;
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";

	i = _strlen(s);

	write(STDOUT_FILENO, s, i);
	return (i);
}


/**
 * print_char - print char
 * @list: va_list
 *
 *
 *
 * Return: 1
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_percent - printf percent
 *
 *
 *
 *
 * Return: 1
 */

int print_percent(void)
{
	_putchar('%');
	return (1);
}
