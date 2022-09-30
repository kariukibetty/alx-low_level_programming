#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: pointer to a string
 *@accept: pointer to a string
 *
 *Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int count = 0;
int g = 0;
int b = 0;

while (s[g] != '\0')
{
while (accept[b] != '\0')
{
if (accept[b] == s[g])
{
count++;
}
b++;
}
b = 0;
g++;
if (s[g] == ' ')
{
break;
}
}
return (count);
}
