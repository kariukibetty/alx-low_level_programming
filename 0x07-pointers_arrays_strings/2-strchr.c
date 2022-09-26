#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: the memory area
 *@c: constant byte
 *
 *Return: a pointer when the character is found
 */
char *_strchr(char *s, char c)
{
int k = 0;

while (s[k] != '\0')
{
k++;
if (s[k] == c)
{
return (&s[k]);
}
}
return ('\0');
}
