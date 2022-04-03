#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int prtD(int num) {
    
    char* a = (char*)malloc(100*sizeof(char));
    int i = 0;
    int count = 0;

    if (num < 0) {
        char sign = '-';
        write(1, &sign, 1);
        num = num * (-1);
        count++;
    }

    if (num == 0) {
        *a = 48;
        write(1, a, 1);
        count++;
    }
    else{
        while(num != 0) {
            *a = 48 + (num % 10);
            a++; 
            i++;
            num = num / 10;
        }

        for(int j = 0; j < i; j++) {
            a--;
            write(1, a, 1);
            count++;
        }
    }
    free(a);
    return count;
}

int prtU(int param) {

    unsigned int num = (unsigned int)param;
    char* a = (char*)malloc(100*sizeof(char));
    int i = 0;
    int count = 0;

    if (num == 0) {
        *a = 48;
        write(1, a, 1);
        count++;
    }
    else{
        while(num != 0) {
            *a = 48 + (num % 10);
            a++; 
            i++;
            num = num / 10;
        }

        for(int j = 0; j < i; j++) {
            a--;
            write(1, a, 1);
            count++;
        }
    }
    free(a);
    return count;
}

int prtO(int param) {

    unsigned int num = (unsigned int)param;

    char* a = (char*)malloc(100*sizeof(char));
    int i = 0;
    int count = 0;

    if (num == 0) {
        *a = 48;
        write(1, a, 1);
        count++;
    }
    else{
        while(num != 0) {
            *a = 48 + (num % 8);
            a++; 
            i++;
            num = num / 8;
        }

        for(int j = 0; j < i; j++) {
            a--;
            write(1, a, 1);
            count++;
        }
    }
    free(a);
    return count; 
}

int prtH(int param) {

    unsigned int num = (unsigned int)param;

    char* a = (char*)malloc(100 * sizeof(char));
    int i = 0;
    int count = 0;
    const char hexDigits[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

    if (num == 0) {
        *a = 48;
        write(1,a,1);
        count++;
    }
    else {
        while (num != 0) {
            *a = hexDigits[num % 16];
            a++; 
            i++;
            num = num / 16;
        }

        for (int j=0; j < i; j++) {
            a--;
            write(1, a, 1);
            count++;
        }
    }
    free(a);
    return count;
}

int prtC(char c) {

    write(1, &c, 1);
    return 1;
}

int my_strlen(char* param_1)
{
    int i = 0;
    while (*param_1 != '\0') {
        i++;
        param_1++;
    }

    return i;
}

int prt_str(char *str) {

    int len = my_strlen(str);
    write(1, str, len);
    return len;
}

int prtP(void * point) {

    unsigned long num = (unsigned long)point;

    char* a = (char*)malloc(100 * sizeof(char));
    int i = 0;
    int count = 0;
    const char hexDigits[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

    prtC('0'); 
    prtC('x');

    if (num == 0) {
        *a = 48;
        write(1,a,1);
        count++;
    }
    else {
        while (num != 0) {
            *a = hexDigits[num % 16];
            a++; 
            i++;
            num = num / 16;
        }

        for (int j=0; j < i; j++) {
            a--;
            write(1, a, 1);
            count++;
        }
    }
    free(a);
    return count + 2;
}

int my_printf(char * restrict format, ...) {

    int printer = 0;
    int pos = 0;

    va_list args;

    va_start(args, format);

    while(format[pos]) {
        if (format[pos] == '%') {
            pos++;
            switch (format[pos]) {
                case 'd' : printer += prtD(va_arg(args, int));
                break;
                case 'u' : printer += prtU(va_arg(args, int));
                break;
                case 'o' : printer += prtO(va_arg(args, int));
                break;
                case 'x' : printer += prtH(va_arg(args, int));
                break;
                case 'c' : printer += prtC(va_arg(args, int));
                break;
                case 's' : printer += prt_str(va_arg(args, char*));
                break;
                case 'p' : printer += prtP(va_arg(args, char*));
                break;
                default : prt_str("This is wrong input");
            } 

            pos++;
            continue;
        }

        prtC(format[pos]);
        printer++;
        pos++;
    }
    va_end(args);
    return printer;
}

// int main(void) {
//     int i;
//     i = 5;
//     int a;

//     a = my_printf("My printf: %o %u %d %c %s %p %x\n", 15, 20, 456, 56, "12351 35123", &i, 5);
//     my_printf("Symbols: %d\n", a);
//     a = printf("Printef: %o %u %d %c %s %p %x\n", 15, 20, 456, 56, "12351 35123", &i, 5);
//     printf("Symbols: %d\n", a);

//     return 0;
// }