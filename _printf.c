#include "main.h"
/**
 * _printf - function ecrit les lignes
 * @format: la forme de ligne
 * Return: chiffre de charactere
 */
int _printf(const char *format, ...)
{
int a = 0;
int tgv = 0;
va_list list;
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
return (-1);
va_start(list, format);
while (format && format[a])
{
if (format[a] == '%')
{
format++;
if (format[a] == '%')
tgv += _putchar('%');
tgv += _checker(list, format[a]);
}
else
tgv += _putchar(format[a]);
format++;
}
va_end(list);
return (tgv);
}
