#include <stdio.h>

/**
 * main- print 50 fibonacci numbers
 *
 * Description: Starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long int sum, first, second;
	int count;

	sum = 0;
	first = 0;
	second = 0;
	count = 0;

	while (count < 49)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	printf("%li\n", sum);
	return (0);
}
