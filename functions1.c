#include <stdio.h>
/**
 * write_binary - print tha binary number
 * @m: tha binary
 * Return: changes
 */
void write_binary(unsigned int m)
{
if (m > 1)
write_binary(m / 2);
printf("%d", m % 2);
}
/**
 * main - write funtion
 * Return: 0
 */
int main(void)
{
unsigned int num = 5;
printf("the result binary equal %u is %b\n", num, num);
return (0);
}
