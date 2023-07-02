#include "main.h"
/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
while (start < end)
{
/**        // Swap elements at start and end indices  */
int temp = a[start];
a[start] = a[end];
a[end] = temp;
/*      // Move indices inward */
start++;
end--;
}
}
