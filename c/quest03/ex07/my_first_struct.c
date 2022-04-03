#include <stdio.h>
#include <string.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


void my_first_struct(integer_array* param_1)
{
    printf("%d\n", param_1->size);
    for (int i = 0; i < param_1->size; i++) {
        printf("%d\n", param_1->array[i]);
    }
}


// struct s_coordinate {
//   int x;
//   int y;
// }

// int main() {
//   struct s_coordinate coord;
  
//   coord.x = 0;
//   coord.y = 0;
//   return 0;
// }

// struct s_coordinate {
//   int x;
//   int y;
// }

// int main() {
//   struct s_coordinate coord;
//   struct s_coordinate* ptr_on_coord = &coord;
  
//   ptr_on_coord->x = 0;
//   ptr_on_coord->y = 0;
//   return 0;
// }