#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals
 *of a square matrix of integers.
 *Return: void
 *@a: pointer array
 *@size: function param int
 */

void print_diagsums(int *a, int size)
{
int x;
unsigned int lSum = 0;
unsigned int rSum = 0;

for (x = 0; x < size * size; x += (size + 1))
{
lSum += a[x];
}
for (x = size - 1; x < (size * size) - 1; x += (size - 1))
{
rSum += a[x];
}
printf("%d, %d\n", lSum, rSum);
}
