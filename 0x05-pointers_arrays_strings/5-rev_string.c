#include "main.h"
#include <stdio.h>

/**
 *rev_string - reverses a string
 *@s: string being reversed
 */

void rev_string(char *s)
{
int a, c;
char *begin, *end, temp;

a = str_len(s);
begin = end = s;

for (c = 0; c < a - 1; c++)
end++;
for (c = 0; c < a / 2; c++)
{
temp = *end;
*end = *begin;
*begin = temp;

begin++;
end--;
}
}

/**
 *str_len - calculates length of a string
 *@pointer: points to the address of the string
 *Return: Always 0.
 */

int str_len(char *pointer)
{
int c = 0;

while (*(pointer + c) != '\0')
c++;
return (c);
}
