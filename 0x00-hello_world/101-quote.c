#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * @i: type to return
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char *quote;

	quote = "'and that piece of art is useful' - Dora Korpar, 2015-10-19";
	fwrite(quote, sizeof(char), strlen(quote), stderr);
	return (0);
}