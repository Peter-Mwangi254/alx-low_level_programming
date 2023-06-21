#include <stdio.h>

/**
 * main - Determine if number is positive or negative or zero
 * Return: 0 When program runs successfully
 */
void positive_or_negative(int i)
{
if (i<0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
