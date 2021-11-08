#include "main.h"

/**
 * print_string - print string
 * @l: va_list
 *
 *
 * Return: integer
 */

int print_string(va_list l)
{
	int i;
	char *s = va_arg(l, char *);

	if (s == NULL)
		s = "(null)";

	i = _strlen(s);

	write(STDOUT_FILENO, s, i);
	return (i);
}


/**
* print_char - print char
* @l: va_list
*
*
*
* Return: 1
*/

int print_char(va_list l)
{
	_putchar(va_arg(l, int));
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
