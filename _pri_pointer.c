#include "main.h"
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
