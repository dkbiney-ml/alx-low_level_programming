#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 8
/**
 * generateRandomCharacter - check the code
 * Return: Always 0.
 */
char generateRandomCharacter(void)
{
return (rand() % ('~' - '!' + 1) + '!');
}
/**
 * generateRandomPassword - check the code
 * @password: char
 * @length: int
 * Return: Always 0.
 */
void generateRandomPassword(char *password, int length)
{
for (int i = 0; i < length; ++i)
{
password[i] = generateRandomCharacter();
}
password[length] = '\0';
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
srand(time(NULL));
char password[PASSWORD_LENGTH + 1];
generateRandomPassword(password, PASSWORD_LENGTH);
printf("Random Password: %s\n", password);
return (0);
}
