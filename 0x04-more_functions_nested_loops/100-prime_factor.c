#include <stdio.h>

/**
 * main - Entry point.
 * Return:0 when program run s successfully.
 */

int main(void)
{
long n, i;

n = 612852475143;
for (i = 2; i < n; i++)
{
while (n % i == 0)
n = n / i;
}

printf("%lu\n", n);

return (0);
}
