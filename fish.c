#include "main.h"

/**
 * print_fish - Prints a ASCII art fish to stdout
 * @center: The offset of the center of the message from the
 * edge of the terminal window
 *
 * Return: void
 */
void print_fish(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\         /\\\n");
	print_spaces(center + 3, NULL);
	printf("\\      _/./\n");
	print_spaces(center + 4, NULL);
	printf("\\  ,-'    `-:..-'/\n");
	print_spaces(center + 6, NULL);
	printf(": o )      _  (\n");
	print_spaces(center + 6, NULL);
	printf("\"`-....,--; `-.\\\n");
	print_spaces(center + 10, NULL);
	printf("`'\n\n");
	print_message("Art inspired by Max Strandberg (www.asciiart.eu)");
}

/**
 * print_whale - Prints a ASCII art whale to stdout
 * @center: The offset of the center of the message from the
 * edge of the terminal window
 *
 * Return: void
 */
void print_whale(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\         .\n");
	print_spaces(center + 3, NULL);
	printf("\\       \":\"\n");
	print_spaces(center + 4, NULL);
	printf("\\    ___:____     |\"\\/\"|\n");
	print_spaces(center + 5, NULL);
	printf("\\ ,'        `.    \\  /\n");
	print_spaces(center + 7, NULL);
	printf("|  O        \\___/  |\n");
	print_spaces(center + 5, NULL);
	printf("~^~^~^~^~^~^~^~^~^~^~^~^~\n\n");
	print_message("Art inspired by Riita Rasimus (www.asciiart.eu)");
}

/**
 * print_seahorse - Prints an ASCII art Sea horse to stdout
 * @center: The offset of the center of the message from the edge
 * of the terminal window
 *
 * Return: void
 */
void print_seahorse(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\\n");
	print_spaces(center + 3, NULL);
	printf("\\   \\``/\n");
	print_spaces(center + 4, NULL);
	printf("\\  /o `))\n");
	print_spaces(center + 6, NULL);
	printf("/_/\\_ss))\n");
	print_spaces(center + 10, NULL);
	printf("|_ss))/|\n");
	print_spaces(center + 9, NULL);
	printf("|__ss))_|\n");
	print_spaces(center + 8, NULL);
	printf("|__sss))_|\n");
	print_spaces(center + 8, NULL);
	printf("|___ss))\\|\n");
	print_spaces(center + 9, NULL);
	printf("|_ss))\n");
	print_spaces(center + 10, NULL);
	printf(")_s))\n");
	print_spaces(center + 4, NULL);
	printf("(`(  /_s))\n");
	print_spaces(center + 5, NULL);
	printf("(_\\/_s))\n");
	print_spaces(center + 6, NULL);
	printf("(\\/))\n\n");
}

/**
 * print_shark - Prints an ASCII art shark to stdout
 * @center: The offset of the center of the message from the
 * edge of the terminal window
 *
 * Return: void
 */
void print_shark(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\\n");
	print_spaces(center + 3, NULL);
	printf("\\  _________         .    .\n");
	print_spaces(center + 5, NULL);
	printf("(..       \\_    ,  |\\  /|\n");
	print_spaces(center + 6, NULL);
	printf("\\       O  \\  /|  \\ \\/ /\n");
	print_spaces(center + 7, NULL);
	printf("\\______    \\/ |   \\  /\n");
	print_spaces(center + 10, NULL);
	printf("vvvv\\    \\ |   /  |\n");
	print_spaces(center + 10, NULL);
	printf("\\^^^^  ==   \\_/   |\n");
	print_spaces(center + 11, NULL);
	printf("`\\_   ===    \\.  |\n");
	print_spaces(center + 11, NULL);
	printf("/ /\\_   \\ /      |\n");
	print_spaces(center + 11, NULL);
	printf("|/   \\_  \\|      /\n");
	print_spaces(center + 18, NULL);
	printf("\\________/\n\n");
	print_message("Artwork by Shanaka Dias (www.asciiart.eu)");
}
