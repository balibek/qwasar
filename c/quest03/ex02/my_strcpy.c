#include <stdio.h>
#include <string.h>

char* my_strcpy(char* param_1, char* param_2)
{
    for (int i = 0; i < strlen(param_2); i++) {
        param_1[i] = param_2[i];
    }
    return param_1;

}

// char *my_strcpy(char *d, char *s){
//    char *saved = d;
//    while ((*d++ = *s++) != '\0');

//    return saved; 
// }

/*
Example of main
*/

// int main() {
//   char dst[100] = {0};
//   char *src     = "Hello";
  
//   printf("my_strcpy -> %s\n", my_strcpy(dst, src));
//   return 0;
// }