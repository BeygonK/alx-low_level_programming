#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    char password[5]; // Array to hold the password, +1 for the null terminator

    // Generate the first 3 characters
    for (int i = 0; i < 3; i++) {
        password[i] = 'A' + rand() % 26; // Generate a random uppercase letter
    }

    // Generate the last character
    password[3] = '0' + rand() % 10; // Generate a random number

    password[4] = '\0'; // Null terminate the password

    printf("%s\n", password); // Print the password

    return 0;
}

