#include <stdio.h>
#include <string.h>

char* my_strncpy(char* param_1, char* param_2, int param_3)
{ 
    for (int i = 0; i < param_3; i++) {
        param_1[i] = param_2[i];
    }
    return param_1;

}

// char*
// strncpy(char *dest, const char *src, size_t n){
//     size_t i;

//     for (i = 0 ; i < n && src[i] != aq\0aq ; i++)
//         dest[i] = src[i];
//     for ( ; i < n ; i++)
//         dest[i] = aq\0aq;

//     return dest;
// }