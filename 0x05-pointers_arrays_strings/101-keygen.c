#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
int i;
for (i = 0; i < length; ++i)
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
char password[9];
generateRandomPassword(password, 9);
printf("Random Password: %s\n", password);
return (0);
}
