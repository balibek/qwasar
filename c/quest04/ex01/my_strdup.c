#include <stdio.h>

char* my_strdup(char* param_1)
{
    char* rng = malloc(sizeof(char)*strlen(param_1));
    for (int i = 0; i < strlen(param_1); i++) {
        rng[i] = param_1[i];
    } 
    return rng;

}


// char *strdup(const char *src) {
//     char *dst = malloc(strlen (src) + 1);  // Space for length plus nul
//     if (dst == NULL) return NULL;          // No memory
//     strcpy(dst, src);                      // Copy the characters
//     return dst;                            // Return the new string
// }