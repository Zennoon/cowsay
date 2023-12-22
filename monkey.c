#include "main.h"

/**
 * print_monkey - Prints an ASCII art monkey to stdout
 * @center: The offset of the center of the message from the edge
 * of the terminal window
 *
 * Return: void
 */
void print_monkey(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\\n");
	print_spaces(center + 3, NULL);
	printf("\\  .=\"=.\n");
	print_spaces(center + 4, NULL);
	printf("_/.-.-.\\_     _\n");
	print_spaces(center + 3, NULL);
	printf("( ( o o ) )    ))\n");
	print_spaces(center + 4, NULL);
	printf("|/  \"  \\|    //\n");
	print_spaces(center + 5, NULL);
	printf("\\'---'/    //\n");
	print_spaces(center + 5, NULL);
	printf("/`\"\"\"`\\\\  ((\n");
	print_spaces(center + 4, NULL);
	printf("/ /_,_\\ \\\\  \\\\\n");
	print_spaces(center + 4, NULL);
	printf("\\_\\\\_'__/ \\  ))\n");
	print_spaces(center + 4, NULL);
	printf("/`  /`~\\  |//\n");
	print_spaces(center + 3, NULL);
	printf("/   /    \\  /\n");
	print_spaces(center - 1, NULL);
	printf(",--`,--'\\/\\    /\n");
	print_spaces(center, NULL);
	printf("'-- \"--'  '--'\n\n");
	print_message("Art by Joan Stark (www.asciiart.eu)");
}
