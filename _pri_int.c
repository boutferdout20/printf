#include "main.h"

/**
* _pri_int - prints integer into the standard output
* @m: integer
*
* by: elmouy & boutferdout20
* Return: number of characters printed
*/
int _pri_int(int m)
{
	int i = 0;

	if (m < 0)
	{
		i += _putchar('-');
		m = -m;
	}

	if (m / 10)
		i += _pri_int(m / 10);

	i += _putchar((m % 10) + '0');
	return (i);
}
