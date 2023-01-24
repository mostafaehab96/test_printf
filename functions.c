#include "main.h"
#include <stdarg.h>

/**
 * print_char - print char
 * @arg: arguments
 * Return: Nothing
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);

	return (1);
}

/**
 * print_int - print an integer
 * @arg: arguments
 * Return: Nothing
 */
int print_int(va_list arg)
{
	int i = va_arg(arg, int);

	return (print_number(i));
}

/**
 * print_string - prints a ctring
 * @arg: arguments
 * Return: Nothing
 */
int print_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	return (i);
}
