#include "main.h"

/**
 *print_triangle - prints a triangle
 *@size: size of the triangle
 *Return: Always 0.
 */
void print_triangle(int size)
{
int y;
int x;

if (size > 0)
{
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
if (y <= size - x)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
