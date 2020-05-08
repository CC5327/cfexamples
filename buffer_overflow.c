#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void buffer_overflow(char *name) {
    char x[8];
    strcpy(x, name);
    printf("hello %s\n", x);
}


int main(int argc, char **argv ) {
    if (argc != 2) {
        printf("%s name\n", argv[0]);
        exit(1);
    }
    buffer_overflow(argv[1]);
    printf("done\n");
    return 0;   
}