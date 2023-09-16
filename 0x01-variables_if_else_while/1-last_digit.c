#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- prints out the last digit
 *
 * Return: always return 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
	printf("%d is greater than %d\n ", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
	printf("%d is equal to %d\n", n, n % 10);
	}
	else
	{
	printf("%d is less than %d & not equal to 0\n", n, n % 10);
	}
	return (0);
}
