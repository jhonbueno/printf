#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * match_especifier - structure to match a specifier with respective function
 * related with the especifier
 * @esp: especifier (%s,%c,%d, ...)
 * @fp: pointer to corresponfind function
 */
struct match_especifier
{
	char esp;
	int (*fp)();
};

typedef struct match_especifier match_t;

int _putchar(char c);
int _strlen(const char *s);
int print_string(va_list l);
int print_char(va_list l);
int print_percent(void);
int _printf(const char *format, ...);
int (*get_function(char s))(va_list);

#endif
