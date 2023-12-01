#include "main.h"
/**
 * main - copies content of a file to another
 * @ac: argument count
 * @av: arguments
 * Return: 1
 */
/*int copy(char *file_from, char *file_to)*/
int main(int ac, char **av)
{
	int fdf, fdt;
	ssize_t rd, wr;
	char *str;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(1);
	}
	str = malloc(sizeof(char) * 1024);
	fdf = open(av[1], O_RDONLY);
	fdt = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error(fdf, fdt, av);
	rd = read(fdf, str, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	wr = write(fdt, str, 1024);
	if (wr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	close(fdf);
	if (close(fdf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	close(fdt);
	if (close(fdt) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
	free(str);
	return (0);
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
