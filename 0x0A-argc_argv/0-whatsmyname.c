#include <stdio.h>
#include "main.h"

/**
* main - prints the name of the program
* @argc: number of arguments
* @argv: an array of arguments
* Return: returns 0 (success)
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
