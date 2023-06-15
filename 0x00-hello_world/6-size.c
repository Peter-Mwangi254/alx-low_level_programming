#include <stdio.h>

/**
 * Description: main- prints the main function
 * Return: Returns 0 if program runs successfully
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
