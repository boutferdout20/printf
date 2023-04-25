#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>

#define BUFF_SIZE 1024

typedef struct function_type
{
char *fmt;
int (*op)(va_list ap, int mode);
int mode;
} ftype;
/** les prototypes**/

int _checker_p(char k, va_list list);
int _str(char *m);
int _pri_ligne(char *k, char *c, char *C);
int _putchar(char);
int _pri_st(char *st);
int _pri_binary(unsigned int m);
int _pri_unsi_int(unsigned int m, int base, char *digit);
int _pri_int(int m);
int _pointer_b(unsigned long int h, char b);
int _pri_pointer(void *p);
int _printf(const char *format, ...);

#endif
