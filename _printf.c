#include "main.h"
void print_buffer(char buffer[], int *buff_ind);
/**
 * _printf - write the function
 * @format: size
 * Return: 3la hssab
 */
int _printf(const char *format, ...)
{
int m, printed = 0, printed_chars = 0;
int flags, width, precision, size, buff_ind = 0;
va_list list;
char buffer[BUFF_SIZE];
va_start(list, format);
if (format == NULL)
return (-1);
for (m = 0; format && format[m] != '\0'; m++)
{
if (format[m] != '%')
{
buffer[buff_ind++] = format[m];
if (buff_ind == BUFF_SIZE)
print_buffer(buffer, &buff_ind);
printed_chars++;
}
else
{
print_buffer(buffer, &buff_ind);
flags = get_flags(format, &m);
width = get_width(format, &m, list);
precision = get_precision(format, &m, list);
size = get_size(format, &m);
++m;
printed = handle_print(format, &m, list, buffer,
flags, width, precision, size);
if (printed == -1)
return (-1);
printed_chars += printed;
}
}
print_buffer(buffer, &buff_ind);
va_end(list);
return (printed_chars);
}
/**
 * print_buffer - write content de buffer
 * @buffer: tableau de charactere
 * @buff_ind: indice de largeur et lengeur
 */
void print_buffer(char buffer[], int *buff_ind)
{
if (*buff_ind > 0)
write(1, &buffer[0], *buff_ind);
*buff_ind = 0;
}
