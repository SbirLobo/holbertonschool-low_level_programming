#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'description for betty requirement'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int last_digit;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d and is ", n, last_digit);

	if (n < 6)
	{
		printf("less than 6 and not 0\n");
	}
	else
		{
		if (n > 0)
		{
			printf("greater than 5\n");
		}
		else
		{
			printf("is 0\n");
		}
		}
	return (0);

}
