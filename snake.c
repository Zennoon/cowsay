#include "main.h"

/**
 * print_snake - Prints an ASCII art snake to stdout
 * @center: The offset of the center of the message from the edge
 * of the terminal window
 *
 * Return: void
 */
void print_snake(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\    ---.\n");
	print_spaces(center + 3, NULL);
	printf("\\  /. .|\n");
	print_spaces(center + 5, NULL);
	printf(">--- |      ____\n");
	print_spaces(center + 7, NULL);
	printf("|  |     / ._ \\\n");
	print_spaces(center + 8, NULL);
	printf("\\ \\____/ /  \\ \\    ___\n");
	print_spaces(center + 9, NULL);
	printf("\\______/    \\ \\__/ __:=-\n");
	print_spaces(center + 22, NULL);
	printf("\\____/\n");
	print_message("Art by MT (www.asciiart.eu)");
}
