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
	/*fd is file descriptor*/
	int fd;
	ssize_t rd, wr;
	int len;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 777);
	len = strlen(text_content);
	if (text_content == NULL)
		return (0);
	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);
	rd = read(fd, text_content, len);
	if (rd == -1)
	{
		return (-1);
	}
	wr = write(STDOUT_FILENO, text_content, rd);
	close(fd);
	return (wr);

}
