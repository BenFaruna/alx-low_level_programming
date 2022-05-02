#include <errno.h>
#include "main.h"

/**
 * create_file - create file and write content to the file
 *
 * @filename: the name of the file to be created
 * @text_content: the data to be written to file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int fd_write;
	unsigned int s_len = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd < 0)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, O_WRONLY | O_TRUNC);
			if (fd == -1)
				return (-1);
		}
		else
			return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	fd_write = write(fd, text_content, s_len);

	if (fd_write == -1)
		return (-1);

	close(fd);
	return (1);
}
