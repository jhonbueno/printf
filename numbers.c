#include "main.h"

/**
 * count_cipher - function
 * @n: integer
 *
 * Return: integer
 */
int count_cipher(int n)
{
	unsigned int i, c;

	c = 0;

	(n < 0) ? (i = (n * (-1))) : (i = n);

	do {
		i /= 10;
		++c;
	} while (i != 0);

	return (c);
}

/**
  * print_integer - function
  * @list: lista
  *
  * Return: integer
  */
int print_integer(va_list list)
{
	int n = va_arg(list, int);
	int res = count_cipher(n);

	if (n <= 0)
		res++;
	if (n == 0)
		res;
	print_number(n);
	return (res);
}
/**
 * print_number - function
 * @n: integer
 *
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n != 0)
	{
		if (n1 / 10)
			print_number(n1 / 10);
		_putchar((n1 % 10) + '0');
	}
	else
		_putchar(n + '0');
}
