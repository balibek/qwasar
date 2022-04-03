#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <resolv.h>

char* my_spaceship(char* param_1)
{
    int x = 0;
    int y = 0; 
    int i = 0;
    int direction; 
    char bearing[100];
    if((param_1[0]!='R')&&(param_1[0]!='L')&&(param_1[0]!='A')){
        char bearing[] = "'up'";
        char *p; 
        int len = snprintf(0, 0, "{x: %d, y: %d, direction: %s}", x, y, bearing);
        p = malloc(len + 1);
        snprintf(p, len + 1, "{x: %d, y: %d, direction: %s}", x, y, bearing);
        return p;
    }
    for (int i = 0; i < strlen(param_1); i++){
        if(param_1[i] =='R'){
            direction+=90;
        }
        else if(param_1[i] =='L'){
            direction-=90;
        }
        else if(param_1[i] =='A'){
            if((direction%360) == 0){
                y = y - 1;
            }
            else if((direction%360) == 90){
                x = x + 1;
            }
            else if((direction%360) == 180){
                y = y + 1;
            }
            else if((direction%360) == 270){
                x = x - 1;
            }
        }
    }

    if ((direction == 0) || (direction == 360) || (direction == 270) || (direction == -270)){
        char bearing[] = "'up'";
        char *p; 
        int len = snprintf(0, 0, "{x: %d, y: %d, direction: %s}", x, y, bearing);
        p = malloc(len + 1);
        snprintf(p, len + 1, "{x: %d, y: %d, direction: %s}", x, y, bearing);
        return p;
    } else if ((direction == 90) || (direction == -90) || (direction == 180) || (direction == -180)) {
        char bearing[] = "'down'";
        char *p; 
        int len = snprintf(0, 0, "{x: %d, y: %d, direction: %s}", x, y, bearing);
        p = malloc(len + 1);
        snprintf(p, len + 1, "{x: %d, y: %d, direction: %s}", x, y, bearing);
        return p;
    }
}