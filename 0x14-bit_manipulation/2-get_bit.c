#include "main.h"

/**
 * get_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
{
unsigned long int max = 0x01;

max <<= index;
if (max == 0)
return (-1);

if ((n & max))
return (1);
else
return (0);
}
}
