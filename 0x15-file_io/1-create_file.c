#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the file to be created
 * @text_content: what is written in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytesW;
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		bytesW = write(fd, text_content, strlen(text_content));
		if (bytesW == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
