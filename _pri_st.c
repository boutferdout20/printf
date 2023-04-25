#include "main.h"

/**
* _pri_st - writes a string into the standard output
* @st: string
* by: elmouy & boutferdout20
* Return: number of characters printed
*/

int _pri_st(char *st)
{
int n = 0;
if (st == NULL)
{
write (1, "(null)", 6);
return (6);
}
while (st[n])
{
_putchar(st[n]);
n++;
}
return (write(1, st, _str(st)));
}
