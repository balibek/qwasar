#include <stdio.h>

char* reverse_string(char* param_1)
{
    for(int i = 0; i < strlen(param_1)/2; i++) {
        char temp = param_1[i];
        param_1[i] = param_1[strlen(param_1)-i-1];
        param_1[strlen(param_1)-i-1] = temp;
    }
    return param_1;
}

/*
Example of main
*/
// int main() {
//   char my_str[] = "Hello";
  
//   printf("Before reverse -> %s", my_str);
//   printf("Reverse -> %s", reverse_string(my_str));
//   return 0;
// }