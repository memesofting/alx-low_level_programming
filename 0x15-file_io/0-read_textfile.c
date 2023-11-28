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
	FILE *fp;
	char c;
	size_t i;

	i = 0;
	fp = NULL;
	fp = fopen(filename, "r");
	if (filename == NULL)
	{
		return (0);
	}
	if (fp == NULL)
	{
		return (0);
	}
	while (i <= letters)
	{
		c = fgetc(fp);
		if (feof(fp))
			return (letters);
		write(1, &c, 1);
		i++;
	}
	fclose(fp);
	return (letters);
}
