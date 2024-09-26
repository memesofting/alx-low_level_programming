#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long a = 1, b = 2;
	unsigned long a_high = 0, a_low = a, b_high = 0, b_low = b;
	unsigned long temp_high, temp_low;
	int count;

	printf("%lu, %lu", a, b);
	for (count = 2; count < 98; count++)
	{
		temp_low = a_low + b_low;
		temp_high = a_high + b_high + (temp_low < a_low);

		a_low = b_low;
		a_high = b_high;
		b_low = temp_low;
		b_high = temp_high;

		if (b_high > 0)
		{
			/*Handle large numbers*/
			printf(", %lu%09lu", b_high, b_low);
		}
		else
		{
			printf(", %lu", b_low);
		}
	}

	printf("\n");
	return (0);
}

