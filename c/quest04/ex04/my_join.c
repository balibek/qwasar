#include <stdio.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

char* my_join(string_array* param_1, char* param_2)
{
    
    int a = 0;
    for(int i = 0; i < param_1->size; i++) {
        for (int l = 0; param_1->array[l] != 0; l++) {
            a++;
        }
    }

    int b = 0;
    for (int i = 0; i <param_1->size; i++)
    {
        b += strlen(param_2);
    }

    char* newString = malloc(sizeof(char)*(a+b+1));

    for(int i = 0; i < param_1->size-1; i++) {
        strcat(newString, param_1->array[i]);
        strcat(newString, param_2);
    }
    strcat(newString, param_1->array[param_1->size-1]);
    return newString;

}

// char* my_join(string_array* param_1, char* param_2)
// {
    
//     int a = 0;
//     for(int i = 0; i < param_1->size; i++) {
//         a += strlen(param_1->array[i]); 
//     }

//     int b = param_1->size*strlen(param_2);

//     char* newString = malloc(sizeof(char)*(a+b+1));
    
//     for(int i = 0; i < param_1->size-1; i++) {
//         strcat(newString, param_1->array[i]);
//         strcat(newString, param_2);
//     }
//     strcat(newString, param_1->array[param_1->size-1]);
//     return newString;
// }
