#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _strlen - get the len of a string
 * @end: pointer
 * @s: string
 * Return: integer
 */
int _strlen(const char *s)
{
	const char *end = s;

	while (*end++) {};
	return (end - s - 1);
}
