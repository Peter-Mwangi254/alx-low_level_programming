#include "main.h"
/**
* put_half - function that print half of the string
* @str: input string
*/
void put_half(char *str)
{
int x, y;
x = 0;
while (str[x] != '\0')
x++;
y = x / 2;

if (x % 2 == 1)
y++;

while (y < x)
{
_putchar(str[y]);
y++;
}
_putchar('\n');
}
