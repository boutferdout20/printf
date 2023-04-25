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
		if (m == -2147483648)
		{
			i += _putchar('2');
			m %= 1000000000;
		}
		i += _pri_int(-m);
	}

	else if (m >= 0 && m <= 9)
		i += _putchar(m + '0');
	else
	{
		i += _pri_int(m / 10);
		i += _pri_int(m % 10);
	}
	return (i);
}
