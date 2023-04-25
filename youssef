#include "main.h"

/**
 * _printf - custom printf implementation
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int a = 0;
	int tgv = 0;
	va_list list;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
	return (-1);
	while (format && format[a])
	{
		if (format[a] == '%')
		{
			a++;
			tgv += _checker_p(format[a], list);
		}
		else
		{
			tgv += _putchar(format[a]);
			a++;
		}
	}
	va_end(list);
	return (tgv);
}
