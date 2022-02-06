#include <cs50.h>
#include <stdio.h>

// if we return 0, that usually meant there were no errors during program run time, otherwise there were error, and we can handle them somehow

int main(int argc, string argv[]) {
    if (argc != 2) {
        printf("Error. Missing command-line argument\n");
        return 1;
    }
    printf("Hello, %s!\n", argv[1]);
    return 0;
}
