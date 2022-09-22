#include "main.h"

/**
 *cap_string - capitalize every word in a string
 *@targ: string input to have words of capitalized
 *Return: the string with capitalized words
 */
char *cap_string(char *targ)
{
char *sep = " \t\n,;.!?\"(){}";
int e = 0, f = 0, cap = 1, g = 0;

for (; targ[e]; e++)
for (; f < e; f++)
{
if (targ[f] >= 'A' && targ[f] <= 'Z')
cap = 0;
if ((targ[f] >= 'a' && targ[f] <= 'z') && cap == 1)
{
targ[f] = ((targ[f] - 'a') + 'A');
cap = 0;
}
for (g = 0; sep[g]; g++)
{
if (targ[f] == sep[g])
{
cap = 1;
if (!(targ[f + 1] <= 'z' && targ[f + 1] >= 'a'))
cap = 0;
}
}
}
return (targ);
}
