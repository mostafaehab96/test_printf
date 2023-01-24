#include "main.h"
#include <stdio.h>


int main(void)
{
	/*_printf("%s\n", name);*/
	int i;
       	i = printf("% s is the first name and %   s is the second\n", "Mostafa", "Ehab");;
	printf("%i\n", i);
	i = _printf("% s is the first name and %   s is the second\n", "Mostafa", "Ehab");
	printf("%i\n", i);
	i = printf("This is a number %   i\n", 20);
	printf("%i\n", i);
	i = _printf("This is a number %   i\n", 20);
	_printf("%i\n", i);
	i = printf("n %  r%");
	printf("\n%i\n", i);
	i = _printf("n %  r%");
	_printf("\n%i\n", i);
	
	i = printf("dfddf% %%%");
	printf("\n%i\n", i);
	i = _printf("d%fddf% %%%");
	_printf("\n%i\n", i);
	i = printf("Not wrong %r %");
	printf("\n%i\n", i);
	i = _printf("Not wrong %r %");
	_printf("\n%i\n", i);

	return (0);
}
