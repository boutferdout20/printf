#include "main.h"

/**
* _pri_st - writes a string into the standard output
* @st: string
*
* by: elmouy & boutferdout20
* Return: number of characters printed
*/
int _pri_st(char *st)
{
	int i;

	if (st == NULL)
	st = "(null)";
	while (st[i])
	{
		_putchar(st[i]);
		i++;
	}
	return (i);
}
