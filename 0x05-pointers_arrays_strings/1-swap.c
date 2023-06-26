#include "main.h"
/**
 *  swap_int - entry point
 * @b : int pointers or int addresses
 * @a : int pi
 * Returns : void
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
