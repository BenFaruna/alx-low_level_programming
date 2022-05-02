#include "main.h"

/**
 * read_textfile - read the contents of a text file by certain letters
 *
 * @filename: the path to the text file
 * @letters: the number of letters to be read
 *
 * Return: the number of letter printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;
	int write_count = 0;
	char *buf = malloc(sizeof(char) * letters + 1);

	int fd = open(filename, O_RDONLY);

	if ((fd == -1) || (filename == NULL))
		return (0);

	if (buf == NULL)
		return (0);

	count = read(fd, buf, letters);

	buf[letters] = '\0';

	write_count = write(STDOUT_FILENO, buf, count);

	if (write_count == -1)
		return (0);

	close(fd);
	free(buf);

	return (count);
}
