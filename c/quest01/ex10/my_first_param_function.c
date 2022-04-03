#include <stdio.h>
// function will printf("detonation in... %d secondes.\n", seconds_left);

int main() {
  int timer = 10;

  while (timer>=1) {
    printf("detonation in... %d secondes.\n", timer);
    --timer;
  }
  
  return 0;
}