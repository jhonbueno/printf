#include "main.h"
#include <stdio.h>

int main(void)
{
	int len;
	int len2;
	char car = 'A';
	char *str = "Holberton School";

	len = _printf("hola mundo %c %% %s\n", car, str);
	len2 = printf("hola mundo %c %% %s\n", car, str);

	_printf("%s\n", str);


	printf("Length:[%d, %i]\n", len, len2);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");


	return (0);
}
