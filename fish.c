#include "main.h"

/**
 * print_fish - Prints a ASCII art fish to stdout
 * @center: The offset of the center of the message from the
 * edge of the terminal window
 *
 * Return: void
 */
void print_fish(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\         /\\\n");
	print_spaces(center + 3, NULL);
	printf("\\      _/./\n");
	print_spaces(center + 4, NULL);
	printf("\\  ,-'    `-:..-'/\n");
	print_spaces(center + 6, NULL);
	printf(": o )      _  (\n");
	print_spaces(center + 6, NULL);
	printf("\"`-....,--; `-.\\\n");
	print_spaces(center + 10, NULL);
	printf("`'\n\n");
	print_message("Art inspired by Max Strandberg (www.asciiart.eu)");
}

/**
 * print_whale - Prints a ASCII art whale to stdout
 * @center: The offset of the center of the message from the
 * edge of the terminal window
 *
 * Return: void
 */
void print_whale(size_t center)
{
	print_spaces(center, NULL);
	printf("")
}
