#include "main.h"

/**
 * print_line - Print a line
 * Description: The function should print a new line
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_lines = 1; num_lines <= n; num_lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
