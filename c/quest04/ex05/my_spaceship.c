#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_spaceship(char* param_1)
{ 
    int x =0;
    int y = 0;
    int der = 0;
    char res[100];

    for (int i = 0; i < strlen(param_1); i++) {
        if(param_1[i] == 'R') {
            der += 90;
        }
        else if(param_1[i] == 'L') {
            der -= 90;
        }
        else if(param_1[i] == 'A') {
            if ((der%360) == 0) {
                y-=1;
            } else if ((der%360) == 90) {
                x+=1;
            } else if ((der%360) == 180) {
                y+=1; 
            } else if ((der%360) == 270) {
                x-=1; 
                }
         }
    }
    if ((der == 0) || (der == 360) || (der == 270) || (der == -270)){
        char res[] = "'up'";
        char *p; 
        int len = snprintf(0, 0, "{x: %d, y: %d, direction: %s}", x, y, res);
        p = malloc(len + 1);
        snprintf(p, len + 1, "{x: %d, y: %d, direction: %s}", x, y, res);
        return p;
    } else if ((der == 90) || (der == -90) || (der == 180) || (der == -180)) {
        char res[] = "'down'";
        char *p; 
        int len = snprintf(0, 0, "{x: %d, y: %d, direction: %s}", x, y, res);
        p = malloc(len + 1);
        snprintf(p, len + 1, "{x: %d, y: %d, direction: %s}", x, y, res);
        return p;
    }
}
