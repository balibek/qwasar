#include <stdio.h>
#include <ctype.h>

void my_putchar(char c) {
  write(1, &c, 1);
}

void my_print_reverse_alphabet()
{
   for (char letter = 'z'; letter >= 'a'; letter--) {
       my_putchar(letter);
   }
    my_putchar('\n');
}
