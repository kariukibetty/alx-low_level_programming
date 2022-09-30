#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: pointer
 *@accept: pointer
 *
 *Return: a pointer to the byte that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
int g = 0;
int b;

while (s[g] != '\0')
{
b = 0;
while (accept[b] != '\0')
{
if (s[g] == accept[b])
{
return (s + g);
}
b++;
}
g++;
}
return (0);
}
