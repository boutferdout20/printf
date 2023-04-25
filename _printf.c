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

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == ' ' && format[1] == '%' && format[2] == '\0')
		return (-1);
	va_start(list, format);
	while (format && format[a])
	{
		if (format[a] == '%')
		{
			format++;
			if (format[a] == '%')
				tgv += _putchar('%');
			else if (format[a] == '\0')
			{
				return (-1);
			}
			else
				tgv += _checker_p(format[a], list);
		}
		else
		{
			tgv += _putchar(format[a]);
		}
		format++;
	}
	va_end(list);
	return (tgv);

}
