#include "main.h"

/**
 * print_cow - Prints a cow in ASCII art
 * @center: The offset of the center of the printed message from the
 * edge of the terminal
 *
 * Return: void
 */
void print_cow(size_t center)
{
	print_spaces(center, NULL);
	printf("\\   ^__^\n");
	print_spaces(center + 1, NULL);
	printf("\\  (oo)\\_______\n");
	print_spaces(center + 4, NULL);
	printf("(__)\\       )\\/\\\n");
	print_spaces(center + 7, NULL);
	printf("||----w||\n");
	print_spaces(center + 7, NULL);
	printf("||     ||\n");
}
