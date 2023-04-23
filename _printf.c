#include "main.h"
#include <stdarg.h>
/**
 * _printf - write the any function
 * @format: print the format
 * Return: changes
 */
int _printf(const char *format, ...)
{
va_list list;
va_start(list);
int m;
char *str;
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
	va_arg(list, int);
	m++;
	break;
case 's':
	str = (char *) va_arg(list, char *);
	while (*str != '\0')
	{
	str++;
	m++;
	}
	break;
case '%':
	m++;
	break;
default:{
	return (-1);
	}
	}
}
else
{
m++;
}
format++;
}
va_end(list);
return (m);
}

