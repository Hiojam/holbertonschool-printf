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
	void (*f)(va_list l);
} types_args_t;

void print_c(va_list l);
void print_s(va_list l);

int _write(int);
int _printf(const char *format, ...);

#endif
