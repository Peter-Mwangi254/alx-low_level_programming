#include "main.h"
#include<stdio.h>

/**
 * file_error - check if a file is opened and handle errors
 * @file_from : file to copy from and check
 * @file_to : file destination to copy to
 * @av : argument vector
 * Return: no return value
 */
void file_error(int file_from, int file_to, char *av[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error can't read from file %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - copies content from one file to another
 * @ac : argument count
 * @av : argument vector
 * Return: 0 when successfull
 */
int main(int ac, char *av[])
{
	int file_from, file_to, error_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_from, file_to, av);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			file_error(-1, 0, av);
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			file_error(0, -1, av);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);



}
