#include "main.h"

/**
 * _strlen - Returns the length of a given string
 * @str: The string whose length is returned
 *
 * Return: The length of str
 */
size_t _strlen(char *str)
{
	size_t len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * _strcmp - Compares two given strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: A positive number, negative number, or zero if s1 > s2, s1 < s2, or
 * s1 == s2 respectively
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
