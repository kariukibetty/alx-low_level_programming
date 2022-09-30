#include "main.h"

/**
 **_strncpy - copies a string
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int t;

for (t = 0; t < n && src[t] != '\0'; t++)
dest[t] = src[t];
while (t < n)
{
dest[t] = '\0';
t++;
}
return (dest);
}
