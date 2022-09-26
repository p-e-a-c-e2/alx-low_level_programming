#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints sum of two diagonals of a square matrix
*intrgers
*@a: 2d array of int types
*@size: size of array
*/
void print_diagsums(int *a, int size)
{
int i, sum1, sum2;
sum1 = 0;
for (i = 0; i < size; i++)
sum1 += *(a + ((size * i) + i));
sum2 = 0;
for (i = 1; i <= size; i++)
sum2 += *(a + ((size * i) - i));
printf("%d, %d\n", sum1, sum2);
}
