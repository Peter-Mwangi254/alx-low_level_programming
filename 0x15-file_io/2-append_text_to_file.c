#include"main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename : the file to append text on
 * @text_content : NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesW;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL && strlen(text_content) > 0)
	{
		bytesW = write(fd, text_content, strlen(text_content));
		if (bytesW == -1)
		{
			return (-1);
			close(fd);
		}
	}
	close(fd);
	return (1);
}
