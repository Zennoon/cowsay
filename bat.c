#include "main.h"

/**
 * print_bat - Prints a ASCII art bat to stdout
 * @center: The offset of the center of the message from the
 * edge of the terminal window / stdout file
 *
 * Return: void
 */
void print_bat(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	if (center <= 20)
	{
		print_spaces(center + 1, NULL);
		printf("--------------------\n");
		center += 20;
	}
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\   /'.    .'\\\n");
	print_spaces(center + 3, NULL);
	printf("\\  \\( \\__/ )/\n");
	print_spaces(center, NULL);
	printf("___   / (o)(o) \\   ___\n");
	print_spaces(center - 5, NULL);
	printf("_.-\"`_  `-.|  ____  |.-`  _'\"-._\n");
	print_spaces(center - 8, NULL);
	printf(".-'.-'//||`'-.\\  V--V  /.-'`||\\\\'-.'-.\n");
	print_spaces(center - 9, NULL);
	printf("`'-'-.// ||    / .____. \\    || \\\\.-'-'`\n");
	print_spaces(center - 3, NULL);
	printf("`-.||_.._|        |_.._||.-'\n");
	print_spaces(center + 6, NULL);
	printf("\\ ((  )) /\n");
	print_spaces(center + 7, NULL);
	printf("'.    .'\n");
	print_spaces(center + 9, NULL);
	printf("`\\/`\n\n");
	print_message("Art by Joan Stark (www.asciiart.eu)");
}
