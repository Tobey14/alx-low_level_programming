#include "main.h"

/*
 * _strlen - function to print the length of the argument
 * @s: The letter being tested
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s  + len) != '\0')
		len++;
	return (len);
}
