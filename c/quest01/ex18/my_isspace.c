#include <stdio.h>
#include <ctype.h>

int my_isspace (char param_1) {
    if (isspace(param_1)) {
    return 1;
  }
  else {
    return 0;
  }
}


// int main() {
//     printf("%c\n", my_isspace("a"));
//     return 0;
// }