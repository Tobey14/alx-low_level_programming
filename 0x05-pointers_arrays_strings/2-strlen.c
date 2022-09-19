#include "main.h"
/*
 * _strlen - print the length of the function
 * @s: The letter being tested
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s  + len) != '\0')
		len ++;

	return (len);
}
