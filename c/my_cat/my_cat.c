#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int a, char ** b) 
{
    int c, d;
    for(int i=1; i<a; i++)
    {
        c = open(b[i], O_RDONLY);
        while(read(c, &d, 1) == 1)
        {
            write(STDOUT_FILENO, &d, 1);
        }
        close(c);
    }
}