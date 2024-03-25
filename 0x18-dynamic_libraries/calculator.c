#include "calculator.h"

/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: result on success
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: result on success
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: result on success
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: result on success
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * mod - calculates the modulus of two integers
 * @a: first integer
 * @b: second integer
 * Return: result on success
 */

int mod(int a, int b)
{
	int result;

	result = a % b;
	if (result < 0)
	{
		result = -(result);
		return (result);
	}
	else
		return (result);
}
