#include "main.h"

/**
 * print_horse - Prints an ASCII art horse to stdout
 * @center: The offset of the center of the message from the edge
 * of the terminal window
 *
 * Return: void
 */
void print_horse(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\\n");
	print_spaces(center + 2, NULL);
	printf("\\\n");
	print_spaces(center + 3, NULL);
	printf("\\        (\\_/)_\n");
	print_spaces(center + 4, NULL);
	printf("\\       /`^)))),\n");
	print_spaces(center + 5, NULL);
	printf("\\     / 9)  ))))\n");
	print_spaces(center + 6, NULL);
	printf("\\   /    , ))))),\n");
	print_spaces(center + 8, NULL);
	printf(",`,  _.\"\\  ))))),              _,,,\n");
	print_spaces(center + 8, NULL);
	printf("'-.-`    \\   )))),       ..., //))))\n");
	print_spaces(center + 18, NULL);
	printf(")   ))))\"\"'\"'\"`    ';  (((\n");
	print_spaces(center + 17, NULL);
	printf("/      )))            \\  )))\n");
	print_spaces(center + 17, NULL);
	printf("|                      | ((\n");
	print_spaces(center + 17, NULL);
	printf("|     '       .        |  ))\n");
	print_spaces(center + 17, NULL);
	printf("('.,   }`      ' _     /  ((\n");
	print_spaces(center + 18, NULL);
	printf("\\/   /.-\"'\"\"-,_ _;_   |   )\n");
	print_spaces(center + 18, NULL);
	printf("/  /`         \\ (  \\. \\   (\n");
	print_spaces(center + 18, NULL);
	printf("'\\ \\           ) )   \\.|\n");
	print_spaces(center + 19, NULL);
	printf("|'\\\\          //     ||\n");
	print_spaces(center + 19, NULL);
	printf("||'\\\\_       //      ||\n");
	print_spaces(center + 19, NULL);
	printf("||  \\_|     ((       ||\n");
	print_spaces(center + 19, NULL);
	printf("||          \\_|     /_/\n");
	print_spaces(center + 18, NULL);
	printf("/_/                  \"'`\n\n");
	print_message("Art inspired by Joan Stark (www.asciiart.eu)");
}
