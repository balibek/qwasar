#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_square(int clm, int rw) {
    int i;
    int a;
    for (i=0; i < rw; i++) {
        for (a=0; a < clm; a++) {
            if (i==0 || i == rw -1) {
                if (a>0 && a<clm-1) {
                printf("-");
                continue;
            }
            printf("o");
        }
        else if (a==0 || a== clm -1) {
            printf("|");
        }
        else {
            printf(" ");
        }
    }
    printf("\n");
    }
}

int main(int ac, char **av) {
    if (ac != 3) {
        return 0;
    }
    int x = atoi(av[1]);
    int y = atoi(av[2]);

    my_square(x, y);
}