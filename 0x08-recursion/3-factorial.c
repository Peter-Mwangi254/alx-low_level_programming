#include "main.h"
/**
 *factorial - gives the factorial of integer n
 *@n: the number to be factorized
 *Return: factorial of integer n
 */

int factorial(int n)
{
if (n == 0)
return (1);

else if (n < 0)
return (-1);
else
return (n * factorial(n - 1)); /*Recursive call*/

}
