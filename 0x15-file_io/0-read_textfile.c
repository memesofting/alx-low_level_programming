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

	letters = 0;
	fp = NULL;
	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	while (!feof(fp))
	{
		c = fgetc(fp);
		write(1, &c, 1);
		letters++;
	}
	fclose(fp);
	return (letters);
}
