#include <stdio.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

int my_putchar(char c) {
  return write(1, &c, 1);
}

void my_putstr(char* param_1)
{   
   int len = 0;
   while (param_1[len] != 0) {
       my_putchar(param_1[len]);
       len++;
   }
}


void my_print_words_array(string_array* param_1)
{
    for (int i=0; i<param_1->size; i++) {
        my_putstr(param_1->array[i]); 
        my_putchar('\n');
    }

}
