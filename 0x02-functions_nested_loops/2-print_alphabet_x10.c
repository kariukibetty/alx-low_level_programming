#include "main.h"

/**
 *print_alphabet_x10 - Prints alphabets in lowecase 10 times
 *Return: Always (0) Success
 *
 */
void print_alphabet_x10(void)
{
char alphas10x;
int count;

for (count = 0; count < 10; count++)
{
for ((alphas10x = 'a'); (alphas10x <= 'z'); (alphas10x++))
_putchar(alphas10x);
_putchar('\n');
}
}
