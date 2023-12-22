#include "main.h"

/**
 * print_elephant - Prints an ASCII art elephant to stdout
 * @center: The offset of the center of the message from the edge
 * of the terminal window
 *
 * Return: void
 */
void print_elephant(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\  _    _\n");
	print_spaces(center + 4, NULL);
	printf("/=\\\"\"/=\\\n");
	print_spaces(center + 3, NULL);
	printf("(=(0_0 |=)__\n");
	print_spaces(center + 4, NULL);
	printf("\\_\\ _/_/   )\n");
	print_spaces(center + 6, NULL);
	printf("/_/   _  /\\\n");
	print_spaces(center + 5, NULL);
	printf("|/ |\\ || |\n\n");
	print_message("Art by Shanaka Dias (www.asciiart.eu)");
}
