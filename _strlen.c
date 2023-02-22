#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @str: string to check
 * Return: lenth of the string (int)
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
