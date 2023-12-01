#include "main.h"
/**
 * copy - copies content of a file to another
 * @file_from: file to copy
 * @file_to: destination file
 *
 * Return: 1
 */

ssize_t copy(char *file_from, char *file_to)
{
	int fdf, fdt;
	ssize_t rd, wr;
	char *str;

	str = malloc(sizeof(char) * 1024);
	fdf = open(file_from, O_RDONLY);
	if (fdf == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fdt = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fdt == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	rd = read(fdf, str, 1024);
	if (rd == -1)
		return (-1);
	wr = write(fdt, str, 1024);
	if (wr == -1)
		return (-1);
	close(fdf);
	if (!close(fdf))
	{
		dprintf(2, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	close(fdt);
	if (!close(fdt))
	{
		dprintf(2, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
	free(str);
	return (0);
}

#include "main.h"
/**
 * main - check the code
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
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(1);
	}
	fcp = copy(av[1], av[2]);
	printf("-> %i)\n", fcp);
	return (0);
}
