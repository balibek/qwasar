#include <stdio.h>
#include <ctype.h>

int my_islower(char param_1) {
    if (islower(param_1)) {
    return 1;
  }
  else {
    return 0;
  }
}

// int my_islower(char param_1) {
//     if (param_1 >= 'a' && param_1 <= 'z') {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// int main() {
//     printf("%c\n", my_islower("a"));
//     return 0;
// }