#include "main.h"

/**
 * print_mouse - Prints an ASCII art mouse to stdout
 * @center: The offset of the center of the message from the edge
 * of the terminal window
 *
 * Return: void
 */
void print_mouse(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\ QQ__\n");
	print_spaces(center + 3, NULL);
	printf("<\"_(_)\n");
	print_spaces(center + 8, NULL);
	printf("(_\n\n");
	print_message("Art inspired by Joan Stark (www.asciiart.eu)");
}
