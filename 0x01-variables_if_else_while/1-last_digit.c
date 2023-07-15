#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	a = n % 10;
	printf("Last digit of %d is %d ", n, a);
	if (a > 5)
		printf("and is greater than 5\n");
	if (a == 0)
		printf("and is 0\n");
	if (a < 6 && (n % 10) != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
