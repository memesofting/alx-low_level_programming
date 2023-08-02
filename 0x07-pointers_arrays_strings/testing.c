#include <stdio.h>
/**
 * main - using sizeof
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int *p;

	n = 20;
	p = &n;

	printf("size of char: %ld bytes\n", sizeof(char));
	printf("value of n: %d\n", n);
	printf("address of n: %p\n", &n);
	printf("value of p: %p\n", p);
	printf("address of p: %d\n", *p);
	printf("address of p: %ls\n", p);
	return (0);
}
