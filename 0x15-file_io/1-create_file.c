#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: null terminated string to write to file
 *
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	if (text_content == NULL)
		return (-1);
	len = strlen(text_content);
	fd = open(filename, O_RDWR, 600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, len);
	close(fd);
	return (1);

}
