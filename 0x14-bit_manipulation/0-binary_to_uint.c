#include "main.h"

/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
int base = 1, count = 0;

if (b == NULL)
return (0);

while (b[count + 1])
{
if (b[count] != '0' && b[count] != '1')
return (0);
count++;
}
while (count >= 0)
{
res += ((b[count] - '0') * base);
base *= 2;
count--;
}

return (res);
}
