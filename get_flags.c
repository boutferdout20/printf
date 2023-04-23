#include "main.h"
/**
 * get_flags - calculer les nombres actives
 * @format: ligne formats
 * @i: le parametere
 * Return: flags
 */
int get_flags(const char *format, int *i)
{
int b, cu_b;
int flags = 0;
const char FLAGS_C[] = {'-', '+', '#', ',', '\0'};
const int FLAGS_TAB = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};
for (cu_b = *i + 1; format[cu_b] != '\0'; cu_b)
{
for (b = 0; FLAGS_C[b] != '\0'; b++)
{
if (format[cu_b] == FLAGS_C[b])
{
flags |= FLAGS_TAB[b];
break;
}
if (FLAGS_C[b] == 0)
break;
}
*i = cu_b - 1;
return(flags);
}
}
