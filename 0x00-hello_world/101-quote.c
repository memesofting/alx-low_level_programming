#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 *
 * Return: 1 (Success)
 */
int main(void)
{
	char *quote;

	quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(quote, sizeof(char), strlen(quote), stderr);
	return (1);
}
