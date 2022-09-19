#include "main.h"

/**
 *puts_half - prints half of the string
 *@str: string being tested
 */

void puts_half(char *str)
{
int count, e, n;

for (count = 0; str[count] != '\0'; count++)
;
if ((count % 2) == 0)
{
for (e = count / 2; str[e] != '\0'; e++)
_putchar(str[e]);
}
else
{
for (n = (count / 2) + 1; str[n] != '\0'; n++)
_putchar(str[n]);
}
_putchar('\n');
}
