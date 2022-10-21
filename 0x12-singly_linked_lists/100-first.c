#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: no return.
 */

void firstfunc(void) __attribute__ ((constructor));

void firstfunc(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}