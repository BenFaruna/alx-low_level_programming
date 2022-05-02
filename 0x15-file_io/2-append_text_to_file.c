#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 *
 * @filename: file to append text to
 * @text_content: text to be appended
 *
 * Return: 1 if write was successful or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int fd_write;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	fd_write = write(fd, text_content, strlen(text_content));
	if (fd_write < 0)
		return (-1);

	return (1);
}
