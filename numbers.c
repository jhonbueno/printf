#include "main.h"

/**
 * print_integer - function
 * @list: lista
 *
 * Return: integer
 */
int print_integer(va_list list)
{
	int number = va_arg(list, int);
	unsigned int i, count;

	count = 0;

	(number < 0)? (i = (number * (-1))) : (i = number);

	do {
		i /= 10;
		++count;
	} while (i != 0);

	(number < 0) ? (count+=1) : count;

	op_number(number);
	return (count);
}

/**
 * op_number - function
 * @n: integer
 *
 */
void op_number(int n)
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
			op_number(number / 10);
		_putchar((number % 10) + '0');
	}
	else
		_putchar(n + '0');
}
