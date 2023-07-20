#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;

        srand(time(0));
        i = rand() - RAND_MAX / 2;
        /* your code goes there */
        /* conditions */
        if (i > 0)
                printf("%d is positive\n", i);
        if (i == 0)
                printf("%d is zero\n", i);
        if (i < 0)
                printf("%d is negative\n", i);
        return (0);
}
