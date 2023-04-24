#include "main.h"
/**
 * _str - incrmentation de ligne
 * @m: ligne
 * Return: l'incrementation
 */
int _str(char *m)
{
int inc = 0;
while (*m++)
inc++;
return (inc);
}
