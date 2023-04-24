#include "main.h"

/**
* _pri_unsi_int - prints unsigned integer to the appropriate base
* @m: integer
* @base: base
* @digit: digits of base
*
* by: elmouy & boutferdout20
* Return: numbers in the appropriate base
*/

int _pri_unsi_int(unsigned int m, int base, char *digit)
{
	int i = 0;

	if (m / base)
		i += _pri_unsi_int(m / base, base, digit);

	i += _putchar(digit[m % base]);
	return (i);
}
