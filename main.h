#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD
#include <stdio.h>
=======

#include <unistd.h>
>>>>>>> 9e42c92e39b0a2c7a173f9bac0434c0e261a3ff1
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>

#define BUFF_SIZE 1024

/** les prototypes**/
int _printf(const char *format, ...);
int _checker_p(char k, va_list args);
int _str(char *m);
int _pri_st(char *st);
int _pri_ligne(char *k, char *c, char *C);
<<<<<<< HEAD
=======
int _putchar(char);
int _pri_st(char *st);
int _pri_binary(unsigned int m);
int _pri_unsi_int(unsigned int m, int base, char *digit);
int _pri_int(int m);

>>>>>>> 9e42c92e39b0a2c7a173f9bac0434c0e261a3ff1
#endif
