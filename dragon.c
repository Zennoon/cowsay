#include "main.h"

/**
 * print_dragon - Prints an ASCII art dragon to stdout
 * @center: The offset of the printed message from the edge of
 * the terminal / stdout file
 *
 * Return: void
 */
void print_dragon(size_t center)
{
	if (center > 15)
		center = 15;
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\");
	print_spaces(21, NULL);
	printf("^    ^\n");
	print_spaces(center + 2, NULL);
	printf("\\");
	print_spaces(19, NULL);
	printf("/ \\  //\\\n");
	print_spaces(center + 3, NULL);
	printf("\\    ");
	printf("|\\___/|      /   \\//  .\\\n");
	print_spaces(center + 4, NULL);
	printf("\\   /0  0  \\__  /    //  | \\ \\\n");
	print_spaces(center + 7, NULL);
	printf("/     /  \\/_/    //   |  \\  \\\n");
	print_spaces(center + 7, NULL);
	printf("@___@'    \\/_   //    |   \\   \\\n");
	print_spaces(center + 10, NULL);
	printf("|       \\/_ //     |    \\    \\\n");
	print_spaces(center + 10, NULL);
	printf("|        \\///      |     \\     \\\n");
	print_spaces(center + 9, NULL);
	printf("_|_ /   )  //       |      \\     _\\\n");
	print_spaces(center + 8, NULL);
	printf("'/,_ _ _/  ( ; -\\_   |    _ _\\.-~/       _/~~~^-.\n");
	print_spaces(center + 10, NULL);
	printf("{        _      \\__|.__/\\           __/        \\\n");
	print_spaces(center + 11, NULL);
	printf("\\      /                ~--.._..-~/    .-~^-.  \\\n");
	print_spaces(center + 12, NULL);
	printf("`.   {            }                  /      \\  \\\n");
	print_spaces(center + 10, NULL);
	printf(".----~-.\\        \\-'                 .~        \\  `. \\^-.\n");
	print_spaces(center + 9, NULL);
	printf("///.----..>    c   \\             _ -~            \\.  ^-`   ^-_\n");
	print_spaces(center + 10, NULL);
	printf("///-._ _ _ _ _ _ _}^ - - - - ~/                   -~--,   .-~\n");
	print_spaces(center + 65, NULL);
	printf("/.-'\n");
}
