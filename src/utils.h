#ifndef __UTILS__
#define __UTILS__

void *alloc_array(int length, int item_size);

void **alloc_matrix(int lines, int columns, int item_size);

void free_matrix(void **matrix, int lines);

void print_float_array(float *array, int size);

#endif