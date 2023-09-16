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
	if(n > 5)
	{
	printf("n is greater than 5 ");
	}
	else if(n == 0)
	{
	printf("n is equal to 0");
	}
	else
	{
	printf("n is less than 6 & not equal to 0");
	}
	return (0);
}
