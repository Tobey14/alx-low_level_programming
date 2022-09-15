#include "main.h"

/**
 * _isupper - define if a character is uppercase
 * Description: Prints the alphabet with _putchar
 * @c: character
 * Return: void
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
