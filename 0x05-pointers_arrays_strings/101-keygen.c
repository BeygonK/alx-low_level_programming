#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    char password[5];

    srand(time(0)); /* Seed the random number generator with the current time */

    /* Generate the first 3 characters */
    for (i = 0; i < 3; i++) {
        password[i] = 'A' + rand() % 26; /* Generate a random uppercase letter */
    }

    /* Generate the last character */
    password[3] = '0' + rand() % 10; /* Generate a random number */

    password[4] = '\0'; /* Null terminate the password */

    printf("%s\n", password); /* Print the password */

    return 0;
}

