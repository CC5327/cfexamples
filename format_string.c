#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void format_string(char *name) {
    char dest[100];
    char a = 'a';
    int x = 1234;
    float z = 1.23;
    strncpy(dest, name, 100);
    printf(name);
    printf("\n");
}


int main(int argc, char **argv ) {
    if (argc != 2) {
        printf("%s name\n", argv[0]);
        exit(1);
    }
    format_string(argv[1]);
    printf("done\n");
    return 0;   
}