#include "main.h"

void print_multiline(char *, int);

/**
 * print_message - Prints the message given as a command line argument
 * @message: The message to print
 *
 * Return: The center of the message (half the width)
 */
size_t print_message(char *message)
{
	size_t len = _strlen(message), i = 0, center = 0;

	if (len <= 60)
	{
		printf("  ");
		print_char('_', len + 2, NULL);
		printf("\n /");
		print_spaces(len + 2, NULL);
		printf("\\\n");
		printf("<  %s  >\n", message);
		printf(" \\");
		print_spaces(len + 2, NULL);
		printf("/\n  ");
		print_char('-', len + 2, NULL);
		printf("\n");
		center = (len / 2) + 3;
	}
	else
	{
		print_multiline(message, len);
		center = 35;
	}
	return (center);
}

/**
 * print_multiline - Prints a long message in multiple lines
 * @message: The text to print
 * @len: Length of the message
 *
 * Return: void
 */
void print_multiline(char *message, int len)
{
	int index = 0, written = 0;

	printf("   ");
	print_char('_', 62, NULL);
	printf("\n  /");
	print_spaces(62, NULL);
	printf("\\\n");
	printf(" /");
	print_spaces(64, NULL);
	printf("\\\n");
	while (index < len)
	{
		write(1, " |  ", 4);
		if (len - index >= 60)
			written = write(1, &message[index], 60);
		else
			written = write(1, &message[index], len - index);
		if (written == 60)
			write(1, "  |\n", 4);
		else
		{
			print_spaces(60 - written, NULL);
			printf("  |\n");
		}
		index += 60;
	}
	printf(" \\");
	print_spaces(64, NULL);
	printf("/\n");
	printf("  \\");
	print_spaces(62, NULL);
	printf("/\n   ");
	print_char('-', 62, NULL);
	printf("\n");
}
