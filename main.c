#include "main.h"
/**
* main - enter les point
* Return: Always 0
*/
int main(void)
{
int incr;
unsigned int oui;
incr = _printf("Let's try to printf a simple sentence.\n");
oui = (unsigned int)INT_MAX + 1024;
_printf("Length:[%d,%i]\n", incr, incr);
_printf("Negative:[%d]\n", -762534);
_printf("Btissam & Youssef\n");
_printf("%s\n", "Boutferdout and Yousseefff");
_printf("%c\n", 'm');
_printf("%d\n", 9);
_printf("binary %b\n", 98);
_printf("Unsigned:[%u]\n", 347698608);
_printf("Unsigned octal:[%o]\n", oui);
_printf("Unsigned hexadecimal:[%x, %X]\n", 32, 12);
_printf("Character:[%c]\n", 'H');
_printf("%%\n");
_printf("%S\n", "Best\nSchool");
return (0);
}
