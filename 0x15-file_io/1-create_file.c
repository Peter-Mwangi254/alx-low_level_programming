#include "main.h"

/**
 * create_file - create and write into a file
 * and copies content in it
 * @filename : the file to be created
 * @text_content : content to be copied ino the file
 * Return: 1 successful or -1 if failed
 */

iint create_file(const char *filename, char *text_content)
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
}

