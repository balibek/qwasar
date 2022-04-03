#include <stdio.h>
#define MAX_ARRAY_SIZE 128

void ngram(int* array, int size_array, char* str) {
    int i = 0;

    // printf("STRING %s\n", str);
    while (str[i] != '\0') {
        if (str[i] != '"') {
            array[str[i]] += 1;
        }
        i+=1;
    }
}

void pr_ngram (int* array, int size_array) {
    int i = 0;

    while (i < size_array) {
        if (array[i] > 0) {
            printf("%c:%d\n", i, array[i]);
        }
        i += 1;
    }
}

int main (int ac, char **av) {
    int i = 1;
    int array[MAX_ARRAY_SIZE] = {0};

    while (i<ac) {
        ngram(&array[0], MAX_ARRAY_SIZE, av[i]);
        i += 1;
    }
    pr_ngram(&array[0], MAX_ARRAY_SIZE);
    return 0;
}