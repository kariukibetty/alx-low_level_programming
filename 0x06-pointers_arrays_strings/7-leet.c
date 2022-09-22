#include "main.h"

/**
 *leet - converts a string into leet speak
 *@targ: the string to be converted into leet speak
 *Return: a string's pointer
 */
char *leet(char *targ)
{
int h = 0, num[5] = {4, 3, 0, 1, 7}, q = 0;
char alpha[10] = "AaEeOoLlTt";

for (; targ[h]; h++)
{
for (q = 0; (targ[h] != alpha[q] && q < 10); q++)
;
if (targ[x] == alpha[y])
{
q /= 2;
targ[h] = (num[q] + '0');
}
}
return (targ);
}
