#ifndef FUCTION_POINTER_H
#define FUCTION_POINTER_H

void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));

#endif
