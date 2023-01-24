#include "main.h"
#include <stdlib.h>

/**
 * get_print - gets the correct function for a format specifier
 * @s: the format specifier
 * Return: the correct function if exists, NULL otherwise
 */

int (*get_print(char s)) (va_list arg)
{
	func_print printers[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
		{'%', print_char}
	};

	int i = 0;

	while (printers[i].format != '%')
	{
		if (s == printers[i].format)
			return (printers[i].func);
		i++;
	}

	return (NULL);
}
