#include <stdio.h>
/**
 * main - prints numbers 1 to 100 in fizzbuzz mode
 * if number is multiple of 3, print fizz
 * if number is multiple of 5, print buzz
 * if number is multiple of both 3 and 5, print fizzbuzz
 *
 * Return: 0 on success
 */
int main(void)
{
	int n, fizz, buzz;

	for (n = 1; n <= 100; n++)
	{
		fizz = n % 3;
		buzz = n % 5;
		if (n == 100)
		{
			printf("Buzz");
			printf("\n");
			return (0);
		}
		if (fizz == 0 && buzz == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		if (fizz == 0)
		{
			printf("Fizz ");
			continue;
		}
		if (buzz == 0)
		{
			printf("Buzz ");
			continue;
		}

		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
