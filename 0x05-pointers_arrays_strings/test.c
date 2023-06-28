#include <stdio.h>
/**
 * rev_string - entry point
 * @s : input char
 * Return : void
*/
void main(void)
{
char s[10] = "My School";
int i = 0;
int j;
char temp[100];
 printf("%s\n", s);
while (*(s + i) != '\0')
{
i++;
}
printf("i after calculation is %d\n", i);
j = i - 1;
printf("j after calculation is %d\n", j);
while (j >= 0)
{
temp[j] = *(s + j);
printf("after %dth iter: %c\n",j,temp[j]);
j--;
}
printf("completed iters j = %d\n",j);
while (s[j + 1] != '\0')
{
s[j + 1] = *(temp + i - 1);
printf("i: %d, j:%d, entry: %c\n", i, j, s[j + 1]);
i--;
j++;
}
printf("%s\n", s);
}
