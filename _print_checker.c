#include "main.h"
/**
 * _checker_p - checker le charactere
 * @k: charactere to check
 * @args: va_list
 * Return: 0
 */
int _checker_p(char k, va_list args)
{
char *c = "0123456789abcdef";
char *C = "0123456789ABCDEF";
if (c == 'c')
	return (_putchar(va_arg(args, int)));
else if (c == 's')
	return (_pri_st(va_arg(args, char *)));
else if (c == 'd' || c == 'i')
	return (_pri_int(va_arg(args, int)));
else if (c == 'b')
	return (_pri_binary(va_arg(args, unsigned int)));
else if (c == 'u')
	return (_pri_unsigned_int(va_arg(args, unsigned int), 10, "0123456789"));
else if (c == 'o')
	return (_pri_unsigned_int(va_arg(args, unsigned int), 8, "01234567"));
else if (c == 'x')
	return (_pri_unsigned_int(va_arg(args, unsigned int), 16, x));
else if (c == 'X')
	return (_pri_unsigned_int(va_arg(args, unsigned int), 16, X));
else if (c == 'S')
	return (_pri_ligne(va_arg(args, char*), c, C));
_putchar ('%')è
_putchar (k);
return (0);
}
