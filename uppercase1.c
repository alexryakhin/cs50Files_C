#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// now we have ctype.h included in our file, and we use functions islower and toupper

int main(void) {
    string s = get_string("Before: ");
    printf("After: ");

    for (int i = 0, n = strlen(s); i < n; i++) {
        if (islower(s[i])) {
            printf("%c", toupper(s[i]));
        } else {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
