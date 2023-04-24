#ifndef MAIN_H
#define MAIN_H

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
#endif
