#include "main.h"
/**
 * get_size - calculer la taille
 * @format: le format de lignes
 * @i: la liste de argumement
 * Return: change
 **/
int get_size(const char *format, int *i)
{
int cu_b = *i + 1;
int taille = 0;
if (format[cu_b] == 'I')
	taille = S_LONG;
else if (format[cu_b] == 'h')
	taille = S_SHORT;
if (size == 0)
*i = cu_b - 1;
else
*i = cu_b;
return (taille);
}
