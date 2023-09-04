#include "main.h"
/**
  *append_text_to_file - appends text to the the end of the file
  *@filename: the file
  *@text_content: the text to append
  *Return: 1(success) or -1(failure);
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

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
	fd = open(filename, O_WRONLY | O_APPEND);

	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
