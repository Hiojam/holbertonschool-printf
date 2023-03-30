#ifndef _MAINH_
#define _MAINH_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdarg.h>

/**
 * struct types_args - Structure for data types and functions.
 *
 * @type: char defining the data type.
 * @f: function to execute.
 */
typedef struct types_args
{
	char type;
	int (*f)(va_list l);
} types_args_t;

void print_number(long int n);
int num_places(int n);

int print_c(va_list l);
int print_s(va_list l);
int print_percentage(va_list l);
int print_int(va_list l);
int print_b(va_list l);

int _write(char);
int _printf(const char *format, ...);

#endif
