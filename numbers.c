#include "main.h"


/**
 * count_cipher - function
 * @n: integer
 *
 * Return: integer
 */
int count_cipher(int n)
{
	unsigned int i, count;

	count = 0;

	(n < 0)	? (i = (n * (-1))) : (i = n);

	do {
		i /= 10;
		++count;
	} while (i != 0);

	return (count);
}


/**
 * print_integer - function
 * @list: lista
 *
 * Return: integer
 */
int print_integer(va_list list)
{
	int number = va_arg(list, int);
	int count = count_cipher(number);

	if (number <= 0)
		count++;
	if (number == 0)
		count = 1;
	print_number(number);
	return (count);
}


/**
 * print_number - function
 * @n: integer
 *
 */
void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
		_putchar('-');
		number = -n;
	}
	else
		number = n;

	if (n != 0)
	{
		if (number / 10)
			print_number(number / 10);
		_putchar((number % 10) + '0');
	}
	else
		_putchar(n + '0');
}
