#include "main.h"
/**
 * _checker_p - check the character and call appropriate functions
 * @k: character to check
 * @args: va_list
 * Return: 0
 */
int _checker_p(char k, va_list args)
{
	char *c = "0123456789abcdef";
	char *C = "0123456789ABCDEF";

	if (k == 'c')
		return (_putchar(va_arg(args, int)));
	else if (k == 's')
		return (_pri_st(va_arg(args, char *)));
	else if (k == 'i' || k == 'd')
		return (_pri_int(va_arg(args, int)));
	else if (k == 'b')
		return (_pri_binary(va_arg(args, unsigned int)));
	else if (k == 'u')
		return (_pri_unsi_int(va_arg(args, unsigned int), 10, "0123456789"));
	else if (k == 'o')
		return (_pri_unsi_int(va_arg(args, unsigned int), 8, "01234567"));
	else if (k == 'c')
		return (_pri_unsi_int(va_arg(args, unsigned int), 16, "0123456789abcdef"));
	else if (k == 'C')
		return (_pri_unsi_int(va_arg(args, unsigned int), 16, "0123456789ABCDEF"));
	else if (k == 'S')
		return (_pri_ligne(va_arg(args, char *), c, C));
	else if (k == 'p')
		return (_pri_pointer(va_arg(args, void*)));
	else if (k == '%')
		return (_putchar('%'));
	_putchar('%');
	_putchar(k);
	return (2);
}
