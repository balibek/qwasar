#include <stdio.h>
#include <ctype.h>

int my_putchar(char c) {
  return write(1, &c, 1);
}

void my_putstr(char* param_1)
{   
   int len = 0;
   while (param_1[len] != 0) {
       my_putchar(param_1[len]);
       len++;
   }
}

