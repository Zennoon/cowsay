#include "main.h"

/**
 * print_cat - Prints a ASCII art cat to stdout
 * @center: The offset of the center of the message from the
 * edge of the terminal window
 *
 * Return: void
 */
void print_cat(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\\n");
	print_spaces(center + 3, NULL);
	printf("\\  /\\_/\\\n");
	print_spaces(center + 5, NULL);
	printf("( o.o )     (\\\n");
	print_spaces(center + 6, NULL);
	printf("> ^ <---.   ))\n");
	print_spaces(center + 5, NULL);
	printf("/     \\   )=='\n");
	print_spaces(center + 5, NULL);
	printf("| |_| |_| |\n");
	print_spaces(center + 5, NULL);
	printf("(_| (_| (_|\n\n");
	print_message("Art done by Zennoon");
}
