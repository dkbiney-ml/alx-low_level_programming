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
    char caps[] = "HELLO MANGO";
    char *ptr;
    int i = 0;
    char set[] = {'a', '4', 'A', '4', 'e', '3', 'E', '3', 'o', '0', 'O', '0', 't', '7', 'T', '7', 'l', '1', 'L', '1'};
    printf("%s %d\n", set, str);
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] += ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm')) ? 13 : -13;
        }
        printf("%c", str[i]);
        i++;
    }
   
    return (0);
}