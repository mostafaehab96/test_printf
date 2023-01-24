#include "main.h"
#include <stdlib.h>

/**
 * correct_format - checks if a character is in available formats
 * @c: the character to check
 * Return: 1 if it's available, 0 otherwise
 */
int correct_format(char c)
{
	char *formats = "idcs%";
	int i;

	for (i = 0; formats[i] != '\0'; i++)
	{
		if (c == formats[i])
			return (1);
	}

	return (0);
}

/**
 * print - accepts a string stat with % and print what
 * the original printf prints
 * @args: the list of argument passed with _printf
 * @s: the string starting with %
 * @percent_before: checks if there was a % char found before
 * Return: array of 3 integers, first for the number of
 * chars printed, second for the lenght of the string
 * third is a bool if found a char after %
 */

int *print(va_list args, const char *s, int percent_before)
{
	int i;
	int space_exist = 0;
	int r = 0;
	int *arr = malloc(sizeof(int) * 3);
	int (*printer)(va_list);

	for (i = 1; s[i] != '\0'; i++)
	{
		/* TODO: check if the character is one if the available format */
		if (correct_format(s[i]))
		{
			printer = get_print(s[i]);
			arr[0] = printer(args);
			arr[1] = i;
			arr[2] = (s[i] != '%' || percent_before) ? 1 : 0;
			return (arr);
		} /* if not */
		else
		{
			if (s[i] == ' ')
			{
				space_exist = 1;
			}
			else
			{
				_putchar('%');
				if (space_exist)
				{
					_putchar(' ');
					r++;
				}
				_putchar(s[i]);
				r += 2;
				arr[0] = r;
				arr[1] = i;
				arr[2] = 1;
				return (arr);
			}
		}

	}
	if (percent_before)
	{
		_putchar('%');
		arr[0] = 1;
		arr[2] = 1;
	}
	else
	{
		arr[0] = 0;
		arr[2] = 0;
	}
	arr[1] = i - 1;

	return (arr);
}
