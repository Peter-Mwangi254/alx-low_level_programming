#include "main.h"
/**
  *create_file - creates the file
  *@filename: the pointer to the file
  *@text_content: text content
  *Return: -1 (error/ failed) or 1 (success)
  */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, w;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	close(fd);

	return (1);
}
