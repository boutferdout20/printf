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
if (st == NULL)
st = "(null)";
return (write(1, st, _str(st)));
}
