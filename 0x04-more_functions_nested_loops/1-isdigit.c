#include "main.h"

/**
 * _isdigit - input
 *
 * Description: define if character is a number
 * @c: character
 * Return: 1 yes 0 no
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
