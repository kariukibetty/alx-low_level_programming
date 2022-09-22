#include "main.h"

/**
 **_strcat - check the code that concatenates two strings.
 *@dest: destination
 *@src: source
 *Return: pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
int k, b;

k = 0;
while (dest[k] != '\0')
{
k++;
}
b = 0;
while (src[b] != '\0')
{
dest[k] = src[b];
k++;
b++;
}
return (dest);
}
