#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

void generatePassword(char *password, int length) {
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

    for (int i = 0; i < length; ++i) {
        password[i] = characters[rand() % (sizeof(characters) - 1)];
    }

    password[length] = '\0'; // Null-terminate the password
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    generatePassword(password, PASSWORD_LENGTH);

    printf("Generated Password: %s\n", password);

    return 0;
}

