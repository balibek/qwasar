#include <stdio.h>

int my_strlen(char* param_1)
{
    int len =0;
    while (param_1[len] != 0) {
        len++;
    }
    return len;
}

// int main() {
//     char* a = "abc";
//     printf("%s\n", a);
//     my_strlen(a);
//     printf("%d\n",my_strlen(a));
//     return 0;
// }
