#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

void *alloc_array(int length, int item_size)
{
    void *array = calloc(length, item_size);
    if (array == NULL)
    {
        perror("Error allocating array");
        exit(1);
    }
    return array;
}

void **alloc_matrix(int lines, int columns, int item_size)
{
    void **matrix = alloc_array(lines, sizeof(void *));
    matrix[0] = alloc_array(lines * columns, item_size);
    for (int i = 0; i < lines; i++)
        matrix[i] = matrix[0] + i * columns;
    return matrix;
}

void free_matrix(void **matrix, int lines)
{
    for (int i = 0; i < lines; i++)
        free(matrix[i]);
    free(matrix);
}

void print_float_array(float *array, int size)
{
    for (int i = 0; i < size; i++)
        printf("%f ", array[i]);
    printf("\n");
}