#include "main.h"
/**
 *print_chessboard - print in the terminal the chessboard
 *@a: The character to print
 *
 */
void print_chessboard(char(*a)[8])
{
int m;
int z;

for (m = 0; m < 8; m++)
{
for (z = 0; z < 8; z++)
{
_putchar(a[m][z]);
}
_putchar('\n');
}
}
