#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    string s = get_string("Input: ");
    printf("Output: ");
    int length = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        printf("%c ", s[i]);
        length++;
    }
    printf("\n");
    printf("Length: %i\n", length);

    // there is a function called strlen() that takes a string and returns an integer, you should include string.h into your file

    printf("Length built in: %lu\n", strlen(s));
}
