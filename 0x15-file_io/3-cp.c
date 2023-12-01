#include "main.h"
/**
 * copy - copies content of a file to another
 * @file_from: file to copy
 * @file_to: destination file
 * Return: 1
 */
int copy(char *file_from, char *file_to)
{
	int fdf, fdt;
	ssize_t rd, wr;
	char *str;

	str = malloc(sizeof(char) * 1024);
	fdf = open(file_from, O_RDONLY);

	fdt = open(file_to, O_RDWR | O_TRUNC | O_CREAT, 0664);
	rd = 1024;
	while (rd == 1024)
	{
		rd = read(fdf, str, 1024);
		if (rd == -1)
			return (-1);
		wr = write(fdt, str, 1024);
		if (wr == -1)
			return (-1);
	}
	close(fdf);
	if (!close(fdf))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	close(fdt);
	if (!close(fdt))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
	free(str);
	return (1);
}

#include "main.h"
/**
 * error - handle file errors
 * @fdf: file_from file descriptor
 * @fdt: file_to file descriptor
 * @av: argument
 * Return: void
 */
void error(int fdf, int fdt, char *av[])
{
	if (fdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fdt == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}
#include "main.h"
/**
 * main - copies file(av[1]) content to another file(av[2])
 * @ac: argument count
 * @av: arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fcp;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fcp = copy(av[1], av[2]);
	/*printf("-> %i)\n", fcp);*/
	return (fcp);
}
