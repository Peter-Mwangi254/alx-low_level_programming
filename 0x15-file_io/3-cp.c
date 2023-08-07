#include "main.h"
#define BUF_SIZE 1024
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
* main - main function
* @argc : number of arguments
* @argv : a pointer to the array of arguments
* Return:0 when successful
**/

int main(int argc, char **argv)
{
int a0, a1, result1, result2;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = malloc(sizeof(char) * BUF_SIZE);
if (!buffer)
return (0);

a1 = open(argv[1], O_RDONLY);
error_98(a1, buffer, argv[1]);
a0 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
error_99(a0, buffer, argv[2]);
do {
	result1 = read(a1, buffer, BUF_SIZE);
	if (result1 == 0)
		break;
	error_98(result1, buffer, argv[1]);
	result2 = write(a0, buffer, result1);
	error_98(result2, buffer, argv[2]);
	} while (result2 >= BUF_SIZE);
	result1 = close(a0);
	error_100(result1, buffer);
	free(buffer);
	return (0);
}

/**
* error_98 - checks the error 98
* @a0: value to check
*@buffer: the buffer
*@argv: argument vector
**/

void error_98(int a0, char *buffer, char *argv)
{
if (a0 < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from the file %s\n", a0);
free(buffer);
exit(98);
}
}

/**
* error_99 - checks error 99
* @buffer: the buffer
* @a0: value to check
* @argv: argument
*/

void error_99(int a0, char *buffer, char *argv)
{
if (a0 < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
free(buffer);
exit(99);
}
}

/**
* error_100 - checks the error 100
* @a0: the value to check
* @buffer: the buffer
**/

void error_100(int a0, char *buffer)
{
if (a0 < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", a0);
free(buffer);
exit(100);
}
}
