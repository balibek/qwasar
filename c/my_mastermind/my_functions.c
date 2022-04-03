#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// Compare to char array
int my_strcmp(char* p1, char* p2) {
    while(*p1 != '\0' && *p2 != '\0') {
        if(*p1 != *p2) {
            return *p1 - *p2;
        }
        p1++;
        p2++;
    }

    if(*p1 != '\0' || *p2 != '\0') {
        return -1; 
    }

    return 0;
}

// Copy data
bool my_strcpy(char* from, char* to, int to_size) {
    for(int i = 0; i < to_size; ++i) {
        if(*from != '\0') {
            *to = *from;
        } else {
            return false;
        }
        ++from;
        ++to;
    }
    return true;
}

// Check unique
bool check_unique(char* digits, int digits_count) {
    for(int i = 0; i < digits_count; ++i) {
        for(int j = i + 1; j < digits_count; ++j) {
            if(digits[i] == digits[j]) {
                return false;
            }
        }
    }
    return true;
}

// Check digits
bool check_digits(char* digits, int digits_count) {
    char* begin = digits;
    for(int i = 0; i < digits_count; ++i) {
        if(*digits == '\0') {
            return false;
        }
        if(*digits < '0' || *digits > '7') {
            return false;
        }
        ++digits;
    }
    return check_unique(begin, digits_count);
}

// Random digits
void random_digits(char* digits, int digits_count) {
    srand(time(NULL));
    for(int i = 0; i < digits_count;  ++i) {
        char ch = '\0';
        do {
            ch = '0' + rand() % 8;
            for(int j = 0; j < i; ++j) {
                if(digits[j] == ch) {
                    ch = '\0';
                    break;
                }
            }
        } while(ch == '\0');
        digits[i] = ch;
    }
}