#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates bytes of a string to another string
* @s1: string to append to
* @s2: string to concatente from
* @n: number of bytes rom s2 to concatenate to s1
* Return: Pointer to the new string
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int x = 0, y = 0, length1 = 0, length2 = 0;
while (s1 && s1[length1])
length1++;
while (s2 && s2[length2])
length2++;

if (n < length2)
str = malloc(sizeof(char) * (length1 + n + 1));
else
str = malloc(sizeof(char) * (length1 + length2 + 1));
if (!str)
return (NULL);
while (x < length1)
{
str[x] = s1[x];
x++;
}
while (n < length2 && x < (length1 + n))
str[x++] = s2[y++];
while (n >= length2 && x < (length1 + length2))
str[x++] = s2[y++];
str[x] = '\0';
return (str);
}
