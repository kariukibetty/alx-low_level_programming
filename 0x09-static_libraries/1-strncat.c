#include "main.h"

/**
 *_strncat - function entry point
 *@dest: destination str
 *@src: source str
 *@n: number of bytes
 *Desc: concatenates two strings using a defined n of bytes from the src
 *Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int len_d = 0;
int y = 0;

while (dest[y])
{
len_d++;
y++;
}

for (y = 0; y < n && src[y] != '\0'; y++)
dest[len_d + y] = src[y];
dest[len_d + y] = '\0';

return (dest);
}
