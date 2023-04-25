#include "main.h"

/**
* _pri_binary - print the binary of an unsigned int
* @m: unsigned integer
*
* by: elmouy & boutferdout20
* Return: number of characters printed
*/

int _pri_binary(unsigned int m)
{
	static int i;

	if (m / 2)
		i += _pri_binary(m / 2);
	i += _putchar(m % 2 + '0');

	return (i);
}
