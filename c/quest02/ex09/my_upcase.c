#include <stdio.h>

char* my_upcase(char* param_1)
{
    for (int i=0; param_1[i] != '\0'; i++) {
        if (param_1[i] >= 'a' && param_1[i] <= 'z') {
            param_1[i] -= 32;
        } 
    }
     return param_1;
}

/*
Example of main
*/
// int main() {
//   char *my_str = my_upcase("AbcE Fgef1");
  
//   printf("RANDOM CASE -> %s\n", my_str);
//   printf("UPCASE      -> %s\n", my_upcase(my_str));
//   return 0;
// }