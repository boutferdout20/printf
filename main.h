#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD
#include <stdarg.h>
#include <unisted.h>
#include <limits.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#define BUFF_SIZE 1024
/** les prototypes**/
int _printf(const char *format, ...);
int _checker_p(char k, va_list args);
int _putchar(char c);
int _str(char *m);
int _pri_st(char *st);
int _pri_binary(unsigned int m);
int _pri_unsigned_int(unsigned int m, int abc, char *dig);
int _int_pri_int(int m);
int _pri_ligne(char *k, char *c, char *C);
=======

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stddef.h>
#include <math.h>

#define BUFF_SIZE 1024

int _putchar(char);
int _pri_st(char *st);
int _pri_binary(unsigned int m);
int _pri_unsi_int(unsigned int m, int base, char *digit);
int _pri_int(int m);
>>>>>>> f43683876c6ea4579cd7124cc990affdcdd3b121
#endif
