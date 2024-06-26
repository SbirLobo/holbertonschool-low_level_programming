#include "main.h"
#include <stdio.h>

/**
 * _arraylen - return length of array
 * @s: array
 * Return: int for response
 */
int _arraylen(int *s)
{
	int numberOfChar = 0;

	while (s[numberOfChar])
	{
		numberOfChar++;
	}
	return (numberOfChar);
}

/**
 * print_array - print n elements of an array
 * @a: array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;
	int lengthofarray = _arraylen(a);

	n = (n < lengthofarray) ? n : lengthofarray;

	for (i = 0; i < n; i++)
	{
		(i == n - 1) ? printf("%d\n", *(a + i)) : printf("%d, ", *(a + i));
	}

}
