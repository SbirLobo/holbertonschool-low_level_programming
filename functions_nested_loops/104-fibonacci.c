#include <stdio.h>

/**
 * main - program for alphabet printing
 * Description: 'print natural'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	long int inst;
	long int big1 = 0;
	long int big2 = 1;
	long int prev_big1 = 0;
	long int prev_big2 = 1;
	long int base = 1000000000;
	long int over;
	char str_big2[80];

	while (i < 97)
	{
		if (big1 > 0)
		{
			printf("%ld", big1);
		}
		sprintf(str_big2, "%ld", big2);
		printf("%s, ", str_big2);

		inst = prev_big2;
		prev_big2 = big2;
		big2 += inst;

		inst = prev_big1;
		prev_big1 = big1;
		big1 += inst;

		over = (big2 - big2 % base) / base;
		if (over > 0)
		{
			big2 -= over * base;
			big1 += over;
		}

		i++;
	}
	printf("%ld%ld\n", big1, big2);
	return (0);
}