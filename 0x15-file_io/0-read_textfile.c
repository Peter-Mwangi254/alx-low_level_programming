#include "main.h"
/**
 * read_textfile - Function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename : File name pointer
 * @letters : Number of letters printed
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *temp;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	nrd = read(fd, temp, letters);
	nwr = write(STDOUT_FILENO, temp, nrd);

	close(fd);
	free(temp);

	return (nwr);
}
