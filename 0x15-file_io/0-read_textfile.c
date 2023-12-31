#include "main.h"

/**
 * read_textfile - reads text file and print to std output
 * @filename: text filename
 * @letters: no of letters to read and print
 *
 * Return: no of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *str;
	ssize_t rd, wr;

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, str, letters);
	if (rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, str, rd);
	close(fd);
	free(str);
	return (wr);
}
