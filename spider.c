#include "main.h"

/**
 * print_spider - Prints an ASCII art spider to stdout
 * @center: The offset of the center of the message from the edge
 * of the terminal window
 *
 * Return: void
 */
void print_spider(size_t center)
{
	if (center < 11)
	{
		print_spaces(center, NULL);
		printf("\\___________\n");
		center += 11;
	}
	print_spaces(center, NULL);
	printf(")\n");
	print_spaces(center, NULL);
	printf("(\n");
	print_spaces(center, NULL);
	printf(")\n");
	print_spaces(center, NULL);
	printf("(\n");
	print_spaces(center, NULL);
	printf(")\n");
	print_spaces(center, NULL);
	printf("(\n");
	print_spaces(center - 7, NULL);
	printf("/\\  .-\"\"\"-.  /\\\n");
	print_spaces(center - 8, NULL);
	printf("//\\\\/  ,,,  \\//\\\\\n");
	print_spaces(center - 8, NULL);
	printf("|/\\| ,;;;;;, |/\\|\n");
	print_spaces(center - 8, NULL);
	printf("//\\\\\\;-\"\"\"-;///\\\\\n");
	print_spaces(center - 9, NULL);
	printf("//  \\/   .   \\/  \\\\\n");
	print_spaces(center - 10, NULL);
	printf("(| ,-_| \\ | / |_-, |)\n");
	print_spaces(center - 8, NULL);
	printf("//`__\\.-.-./__`\\\\\n");
	print_spaces(center - 9, NULL);
	printf("// /.-(() ())-.\\ \\\\\n");
	print_spaces(center - 10, NULL);
	printf("(\\ |)   '---'   (| /)\n");
	print_spaces(center - 9, NULL);
	printf("` (|           |) `\n");
	print_spaces(center - 7, NULL);
	printf("\\)           (/\n\n");
	print_message("Art inspired by jgs (www.asciiart.eu)");
}
