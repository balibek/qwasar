#include <stdio.h>
#include <ctype.h>

int my_isupper (char param_1) {
    if (isupper(param_1)) {
    return 1;
  }
  else {
    return 0;
  }
}


// int main() {
//     printf("%c\n", my_isupper("a"));
//     return 0;
// }