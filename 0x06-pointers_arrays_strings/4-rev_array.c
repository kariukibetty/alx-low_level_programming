#include "main.h"

/**
 *reverse_array - Reverses contents of an array of integers
 *@a: Pointer to first element
 *@n: Number of elements
 *
 *Return: Void
 */
void reverse_array(int *a, int n)
{
int o = 0;
int v = n - 1;
int tmp;

while (o < v)
{
tmp = a[o];
a[o] = a[v];
a[v] = tmp;
o++;
v--;
}
}
