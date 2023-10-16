#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
/**
 * generatePassword - Function to generate passeord
 * @password: param
 * @length: param
 * Return: 0
 */
void generatePassword(char *password, int length)
{
	int i;
	char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	for (i = 0; i < length; ++i)
	{
		password[i] = characters[rand() % (sizeof(characters) - 1)];
	}
	password[length] = '\0';

}

int main()
{
	srand(time(NULL));

	generatePassword(password, PASSWORD_LENGTH);
	printf("Generated: %s\n", password);

	return (0);
}
