#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

/**
 * struct print - New typedef struct
 * @format: data type
 * @func: a pointer to a function
 */
typedef struct print
{
        char format;
        int (*func)(va_list arg);
} func_print;
int _putchar(char c);
int print_char(va_list arg);
int print_int(va_list arg);
int print_string(va_list arg);
int print_number(int n);
int (*get_print(char c)) (va_list arg);
int _printf(const char *format, ...);
int *print(va_list args, const char *s, int percent_before);
int check_format(char c);
#endif
