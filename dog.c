#include "main.h"

/**
 * print_dog - Prints an ASCII art dog to stdout
 * @center: The offset of the center of the message from the edge
 * of the terminal window
 *
 * Return: void
 */
void print_dog(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\    __\n");
	print_spaces(center + 4, NULL);
	printf("o-''|\\_______/)\n");
	print_spaces(center + 5, NULL);
	printf("\\_/|_)       )\n");
	print_spaces(center + 8, NULL);
	printf("\\  ____  /\\\n");
	print_spaces(center + 8, NULL);
	printf("(_/\\_\\(_/\\_\\\n\n");
	print_message("Art inspired by Hayley Jane Wakenshaw");
}
