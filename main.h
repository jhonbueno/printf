#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct match_especifier - structure to match a specifier with respective
 * function correspondig with the especifier
 * @esp: especifier (%s,%c,%d, ...)
 * @fp: pointer to corresponfind function
 * Description: the mainly purpouse is matching a especifier with its
 * correspondig function which is a function pointer.
 */
struct match_especifier
{
	char *esp;
	int (*fp)();
};

/**
 * match_t - Typedef for unsigned match_especifier
 */
typedef struct match_especifier match_t;

int _putchar(char c);
int _strlen(const char *s);
int print_string(va_list list);
int print_char(va_list list);
int print_percent(void);
int _printf(const char *format, ...);
int (*get_function(char s))(va_list);

int count_chiper(int n);
int print_integer(va_list list);
void op_number(int n);

#endif
