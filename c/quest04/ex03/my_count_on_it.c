#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array* my_count_on_it(string_array* param_1)
{
    int array[param_1->size];
    for(int i = 0; i < param_1->size; i++) {
        array[i] = strlen(param_1->array[i]);
    }
    integer_array* a = malloc(sizeof(integer_array));
    a->array=array;
    a->size=param_1->size;
    return a;
}