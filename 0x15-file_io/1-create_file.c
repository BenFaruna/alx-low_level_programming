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
	unsigned int s_len = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	write(fd, text_content, s_len);
	return (1);
}
