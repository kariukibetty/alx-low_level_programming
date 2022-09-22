#include "main.h"
/**
 *string_toupper - Changes all lowercase letters to uppercase
 *@c: Pointer to first element
 *
 *Return: c
 */
char *string_toupper(char *c)
{
int r = 0;

while (c[r] != '\0')
{
if (c[r] >= 'a' && c[r] <= 'z')
{
c[r] = c[r] - 'a' + 'A';
}
r++;
}
return (c);
}
