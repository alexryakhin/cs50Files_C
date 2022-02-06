#include <cs50.h>
#include <stdio.h>

// argc = Argument count - count of the words when progmam's started
// argv = Argument vector - all the words humad typed when run your program including the name of the program

int main(int argc, string argv[]) {
    if (argc == 2) {
        printf("Hello, %s!\n", argv[1]);
    } else {
        printf("Hello World!\n");
    }
}
