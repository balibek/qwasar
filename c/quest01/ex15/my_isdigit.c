#include <stdio.h>
#include <ctype.h>

int my_isdigit(char param_1) {
    if (isdigit(param_1)) {
    return 1;
  }
  else {
    return 0;
  }
}


// int main() {
//     printf("%d\n", my_isdigit("a"));
//     return 0;
// }