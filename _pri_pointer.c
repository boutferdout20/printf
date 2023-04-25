#include "main.h"
/**
 * _pri_pointer - prints pointer address into the standard output
 * @p: pointer address
 *
 * Return: number of characters printed
 */
int _pri_pointer(void *p)
{
	unsigned long int d = (unsigned long int)p;
	int i = 0;

	i += _putchar('0');
	i += _putchar('x');
	i += _pri_unsi_int(d, 16, "0123456789abcdef");

	return (i);
}
