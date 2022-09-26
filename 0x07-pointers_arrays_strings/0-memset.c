#include "main.h"
/**
 *_memset - fills memory with constant byte
 *@x: pointer to the memory area
 *@n: bytes of memory
 *@o: constant byte
 *
 *Return: the memory area of x
 */
char *_memset(char *x, char o, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
x[i] = o;
i++;
}
return (x);



}
