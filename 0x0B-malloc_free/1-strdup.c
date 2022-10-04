#include "main.h"
/**
 *_strlen - give the length of a string
 *@s: the string
 *
 *Return: the length of a string
 */
int _strlen(char *s)
{
int i;

for (i = 0 ; s[i] != NULL ; i++)
;
return (i);
}
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strdup - returns a pointer which contains a copy of the string
 *given as a parameter
 *@str: The string to print
 *
 *
 *Return: a pointer to the duplicated string or NULL if insufficient
 *memory was available
 */
char *_strdup(char *str)
{
int i;
char *copy;

if (str == NULL)
{
return (NULL);
}
i = _strlen(str);
copy = malloc(sizeof(char) * i + 1);
if (copy == NULL)
{
return (NULL);
}
else
{
for (i = 0 ; str[i] != NULL ; i++)
{
copy[i] = str[i];
}
}
copy[i] = NULL;
return (copy);
}

