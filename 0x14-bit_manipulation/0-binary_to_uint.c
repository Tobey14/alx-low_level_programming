#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned
 * @b: a string of 0 and 1 chars
 *
 * Return: the convertd number or 0 if b is NULL or different from 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int usign;
	int length, two;

	if (!b)
		return (0);

	usign = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, two = 1; len >= 0; len--, two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			usign += two;
		}
	}

	return (usign);
}