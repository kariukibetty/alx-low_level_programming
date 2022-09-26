#include "main.h"
/**
 *_strstr - locates a substring
 *@haystack: string
 *@needle: string
 *
 *Return: a pointer to the beginning of a substring
 */
char *_strstr(char *haystack, char *needle)
{
int g;
int b;

for (g = 0; haystack[g] != '\0';)
{
for (b = 0; needle[b] != '\0'; b++)
{
if (needle[b] != haystack[g + b])
{
break;
}
}
if (needle[b] == '\0')
{
return (&haystack[g]);
}
g++;
}
return ('\0');
}
