#ifndef FUCTION_POINTER_H
#define FUCTION_POINTER_H
#include <stddef.h>

void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));

#endif
