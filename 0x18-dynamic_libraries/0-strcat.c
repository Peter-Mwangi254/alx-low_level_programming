#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to destination string
 *@src: A pointer to source string
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
