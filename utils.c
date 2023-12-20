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

	while (str && str[len])
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

	while ((s1 && s2) && s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/**
 * print_spaces - Prints a given number of spaces
 * @num: The number of spaces to print
 * @color: The color of the spaces
 *
 * Return: void
 */
void print_spaces(int num, char *color)
{
	int i;

	for (i = 0; i < num; i++)
		if (color == NULL)
			printf(" ");
		else
			printf(WHT " " RESET "");
}

/**
 * print_char - Prints a given character a given number of times
 * @c: The character to print
 * @num: The number of times to print the character
 * @color: The color of the character
 *
 * Return: void
 */
void print_char(char c, int num, char *color)
{
	int i;

	for (i = 0; i < num; i++)
		if (color == NULL)
			printf("%c", c);
		else
			printf(WHT "%c" RESET "", c);
}
