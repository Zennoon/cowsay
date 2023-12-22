#include "main.h"

/**
 * print_frog - Prints an ASCII art frog to stdout
 * @center: The offset of the center of the message from the edge
 * of the terminal window
 *
 * Return: void
 */
void print_frog(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\   _   _\n");
	print_spaces(center + 3, NULL);
	printf("\\ (.)_(.)\n");
	print_spaces(center + 2, NULL);
	printf("_ (   _   ) _\n");
	print_spaces(center + 1, NULL);
	printf("/ \\/`-----'\\/ \\\n");
	print_spaces(center - 1, NULL);
	printf("__\\ ( (     ) ) /__\n");
	print_spaces(center - 1, NULL);
	printf(")   /\\ \\._./ /\\   (\n");
	print_spaces(center, NULL);
	printf(")_/ /|\\   /|\\ \\_(\n\n");
	print_message("Art by Joan Stark (www.asciiart.eu)");
}
