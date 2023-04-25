#include "main.h"
/**
 * _pointer_b - function to hexadicimale
 * @h: chiffre
 * @b:la base de chiffre
 * Return: 3la hassab hexa
 */
int _pointer_b(unsigned long int h, char b)
{
int a = 0, l, u;
char *X = "0123456789abcdef";
char m[64];
if (h == 0)
return (-1);
while (h)
{
u = h % 16;
h = h / 16;
m[a] = u;
a++;
}
l = a - 1;
while (l >= 0)
{
if (b == 'X')
_putchar(X[(int)m[l]]);
else
_putchar(m[l] + '0');
l--;
}
return (a);
}
/**
 * _pri_pointer - le pointeur
 * @p: chiffre qui afficher
 * Return: 3onwan de pointeur
 */
int _pri_pointer(void *p)
{
int htm = 0;
unsigned int pp;
if (!p)
{
htm += _pri_st("(nil)");
return (htm);
}
pp = (unsigned long int)p;
htm += _pri_st("0x");
htm += _pri_unsi_int(pp, 16, "0123456789abcdef");
return (htm);
}
