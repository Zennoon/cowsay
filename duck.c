#include "main.h"

/**
 * print_duck - Prints a ASCII art duck to stdout
 * @center: The offset of the center of the message to the edge of
 * the terminal
 *
 * Return: void
 */
void print_duck(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\\n");
	print_spaces(center + 3, NULL);
	printf("\\\n");
	print_spaces(center + 4, NULL);
	printf("\\       ,----,\n");
	print_spaces(center + 5, NULL);
	printf("\\ ___.'      ',\n");
	print_spaces(center + 7, NULL);
	printf("`===  D     :\n");
	print_spaces(center + 9, NULL);
	printf("`'.      .\n");
	print_spaces(center + 12, NULL);
	printf(")    (                   ,\n");
	print_spaces(center + 11, NULL);
	printf("/      \\_________________/|\n");
	print_spaces(center + 10, NULL);
	printf("/                          |\n");
	print_spaces(center + 9, NULL);
	printf("|                           ;\n");
	print_spaces(center + 9, NULL);
	printf("|               _____       /\n");
	print_spaces(center + 9, NULL);
	printf("|      \\       ______7    ,'\n");
	print_spaces(center + 9, NULL);
	printf("|       \\    ______7     /\n");
	print_spaces(center + 10, NULL);
	printf("\\       `-,____7      ,'\n");
	print_spaces(center, NULL);
	printf("^~^~^~^~^~^`\\                  /~^~^~^~^~^~^\n");
	print_spaces(center + 2, NULL);
	printf("~^~^~^~^~^ `________________' ~^~^~^~^~^\n");
	print_spaces(center + 1, NULL);
	printf("~^~^~^~^~^~^~^^~^~^~^~^~^~^~^~^~^~^~^~^~\n\n");
	print_message("Art by Joan Stark (www.asciiart.eu)");
}
