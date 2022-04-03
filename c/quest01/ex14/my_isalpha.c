#include <stdio.h>
#include <ctype.h>

int my_isalpha(char param_1) {
    if (isalpha(param_1)) {
    return 1;
  }
  else {
    return 0;
  }
}


// int main() {
//     printf("%c\n", my_isalpha("a"));
//     // printf("%s\n", my_isalpha(""));
//     // printf("%d\n", my_isalpha(0));
//     return 0;
// }