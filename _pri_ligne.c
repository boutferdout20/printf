#include "main.h"
/**
* _pri_ligne - print a string
* @k : the string to print
* @c : a hexadecimal (base 16) integer
* @C : a hexadecimal (upper case)
* Return: string
*/
int _pri_ligne(char *k, char __attribute__((unused)) *c, char *C)
{
	int i, j = 0;

	if (k == NULL)
		k = "(null)";
	for (i = 0; k[i]; i++)
	{
		if (k[i] < 32 || k[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			j += 2;
			if (k[i] < 16)
				j += _putchar('0');
			j += _pri_unsi_int((unsigned int)k[i], 16, C);
		}
		else
			j += _putchar(k[i]);
	}
	return (j);
}
