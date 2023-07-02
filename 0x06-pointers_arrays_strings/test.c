#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */


int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;
    int i = 0;
char set[] = {'a','4','A','4','e','3','E','3','o','0','O','0','t','7','T', '7', 'l', '1', 'L', '1'};
printf("%s %d\n", set, *str);

while (str[i] != '\0')
{
printf("str : %d", *str);
int j = 0;
while(set[j] != '\0')
{
printf(" set : %d\n", *set);
    if (set[j] == str[i])
    {
    str[i] = set[j + 1];
    break;
    }
   j++;
}
    i += 1;
}
printf("%s\n", str);

    return (0);
}