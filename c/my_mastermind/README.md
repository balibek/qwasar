# my_mastermind

To start the game the user enters a line in terminal in the following format:
./my_mastermind -c [code] -t [attempts]

The game will also work if the number of attempts is written first and then goes the code
./my_mastermind -t [attempts] -c [code] 
[code] and [attempts] should be replaced with numbers

The game will also work if the code and/or the number of attempts are not included in the command
./my_mastermind -t [attempts]
./my_mastermind -c [code] 
./my_mastermind 

-c [CODE]: specifies the secret code
-t [ATTEMPTS]: specifies the number of attempts

In this case, the code will be a random number and 10 attemps will be given

Code requirements
- It should be a 4 digit number
- It should not contain repeating elements
- Pieces will be '0' '1' '2' '3' '4' '5' '6' '7'

I created function which compare to char array
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

Function which copy data
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

And code needed function which can check unique and digits
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

Created function to random digits
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

And in file my_mastermind I have main function which printed code