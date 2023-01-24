#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - prints a formmated string like original printf
 * @format: the formmated string to be printed
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int r = 0;
	int *ar;
	int percent_found = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1); 
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ar = print(args, format + i, percent_found);
			r += ar[0] - 1;
			i += ar[1];
			percent_found = ar[2];
		}
		else
			_putchar(format[i]);
		
		i++;
		r++;
	}
	/* %%% , %, -1 */
	va_end(args);
	free(ar);
	if (percent_found)
		return (r);
	return (-1);
}
