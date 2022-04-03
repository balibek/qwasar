#include <stdio.h>

int* my_range(int param_1, int param_2)
{
    int* rng = malloc(sizeof(int)*(param_2-param_2)); //Функция malloc выделяет блок памяти, размером sizemem байт, и возвращает указатель на начало блока
    for(int i=0; i < (param_2-param_1); i++) {
        rng[i] = param_1+i;
    }
    return rng;

}