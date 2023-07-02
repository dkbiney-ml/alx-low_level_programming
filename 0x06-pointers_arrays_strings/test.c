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
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char caps[] = "HELLO MANGO";
    char *ptr;
    int i, j = 0;
    char set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    printf("%c and its rot13: %c\n", set[2], rot13[2]);
    char str[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";

    while (str[i] != '\0')
    {
        j = 0;
        while (set[j] != '\0')
        {
            if (set[j] == str[i])
            {
                str[i] = rot13[j];
                break;
            }
            j++;
        }
        i++;
    }
 printf("%s", str);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    return (0);
}