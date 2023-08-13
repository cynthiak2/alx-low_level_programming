#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main -Entry point
 * Return: Always 0 (Success)
 *
 * FUNCTIONALITY *
 * 1. If n is greater than 0 it returns the number is positive
 * 2. If n is less than 0 it prints n is negative
 * 3. If the number is equal to 0 it prints n is zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n",n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
