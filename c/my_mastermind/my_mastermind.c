#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_functions.h"
#define SIZE 4
#define DEFAULT_ROUND_NUMBER 10
#define INPUT_SIZE 100

int main(int argc, char** argv) {

    bool has_incorrect_args = false;

    char answer[SIZE + 1] = "";
    int round_count = DEFAULT_ROUND_NUMBER;

    for(int i = 0; i < argc; ++i) {
        // printf("%s\n", argv[i]);

        if(my_strcmp(argv[i], "-c") == 0) {

            if(i + 1 < argc) {
                if(!my_strcpy(argv[i + 1], answer, SIZE)) {
                    has_incorrect_args = true;
                    break;
                }

                if(!check_digits(answer, SIZE)) {
                    printf("Incorrect Digits: %s\n", answer);
                    has_incorrect_args = true;
                    break;
                }

                ++i;
            } else {
                has_incorrect_args = true;
                break;
            }
        } else if (my_strcmp(argv[i], "-t") == 0) {
            if(i + 1 < argc) {
                round_count = atoi(argv[i + 1]);
            } else {
                has_incorrect_args = true;
                break;
            }
        }

    }

    if(has_incorrect_args) {
        printf("Incorrect arguments!\n");
        return 22;
    }

    if(answer[0] == '\0') {
        random_digits(answer, SIZE);
    }

    // printf("Answer: %s\n", answer);
    printf("Number of rounds: %d\n", round_count);

    printf("Will you find the secret code?\n");

    bool is_victory = false;

    setvbuf(stdout, NULL, _IONBF, 0);

    for(int round = 0; round < round_count; ++round) {
        printf("Round %d\n", round);

        do {
            printf("> ");
            char attempt[INPUT_SIZE + 1] = "";
            read(STDIN_FILENO, attempt, INPUT_SIZE);
            
            if(!check_digits(attempt, SIZE)) {
                printf("Wrong input!");
                continue;
            }

            int wellPlaced = 0;
            for(int i = 0; i < SIZE; ++i) {
                if(answer[i] == attempt[i]) {
                    ++wellPlaced;
                }
            }

            int misplaced = 0;
            for(int i = 0; i < SIZE; ++i) {
                char ch = attempt[i];
                for(int j = 0; j < SIZE; ++j) {
                    if(i != j && answer[j] == ch) {
                        ++misplaced;
                        break;
                    }
                }
            }

            if(wellPlaced == SIZE) {
                is_victory = true;
                break;
            } else {
                printf("Well placed pieces: %d\n", wellPlaced);
                printf("Misplaced pieces  : %d\n", misplaced);
            }

            break;

        } while(true);

        if(is_victory) {
            break;
        }

    }

    if(is_victory) {
        printf("Congratz! You did it!\n");
    } else {
        printf("Your lose.\n");
        printf("Correct answer: %s\n", answer);
        printf("Try again.\n");
    }
    
    return 0;

}