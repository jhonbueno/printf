# _printf function

## Description

This function prints the string supplied with special operators to substitute
according to an specified format.

```
_printf (const char *FORMAT, ARGUMENT...){}
_printf (const char *format,...){}
_printf ("%[OPERATOR]");
```

Prints ARGUMENT(s) according to options in supplied FORMAT string:
FORMAT is the string to print with OPERATORS. Specified formats are:

* %%: a single '%'

* %c ARGUMENT for character type is printed.

* %s ARGUMENT for string type is printed.

* %d/%i ARGUMENT for integer type is printed.

## Files included

| File                 | Details                                    |
|--------------------- | ------------------------------------------ |
| [_printf](./_printf.c) | prints any string according to format    |
| [main.h](./main.h)   | containts all the prototypes               |
| [misc.c](./misc.c)   | putchar function and strlen                |
| [strings.c](./strings.c) | functions for printing strings      |
| [numbers.c](./numbers.c) | functions for print integer numbers               |


## Ejecutando las pruebas ⚙️

```
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
```

## Autores ✒️

* **Jhon Bueno** - [jhonbueno](https://github.com/jhonbueno)
* **Diego Jojoa** - [diegojojoa](https://github.com/diegojojoayandun/)
