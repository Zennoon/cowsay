#include "main.h"

/**
 * print_rabbit - Prints an ASCII art rabbit to stdout
 * @center: The offset of the center of the message from the
 * edge of the terminal
 *
 * Return: void
 */
void print_rabbit(size_t center)
{
	print_spaces(center, NULL);
	printf("\\\n");
	print_spaces(center + 1, NULL);
	printf("\\             ,\n");
	print_spaces(center + 2, NULL);
	printf("\\           /|      __\n");
	print_spaces(center + 3, NULL);
	printf("\\         / |   ,-~ /\n");
	print_spaces(center + 4, NULL);
	printf("\\       Y :|  //  /\n");
	print_spaces(center + 5, NULL);
	printf("\\      | jj /( .^\n");
	print_spaces(center + 6, NULL);
	printf("\\     >-\"~\"-v\"\n");
	print_spaces(center + 7, NULL);
	printf("\\   /       Y\n");
	print_spaces(center + 8, NULL);
	printf("\\ j0  0    |\n");
	print_spaces(center + 9, NULL);
	printf("( ~T~     j\n");
	print_spaces(center + 10, NULL);
	printf(">._-' _./\n");
	print_spaces(center + 9, NULL);
	printf("/   \"~\"  |\n");
	print_spaces(center + 8, NULL);
	printf("Y     _,  |\n");
	print_spaces(center + 7, NULL);
	printf("/| ;-\"~ _  l\n");
	print_spaces(center + 6, NULL);
	printf("/ l/ ,-\"~    \\\n");
	print_spaces(center + 6, NULL);
	printf("\\//\\/      .- \\\n");
	print_spaces(center + 7, NULL);
	printf("Y        /    Y\n");
	print_spaces(center + 7, NULL);
	printf("l       I     !\n");
	print_spaces(center + 7, NULL);
	printf("]\\      _\\    /\"\\\n");
	print_spaces(center + 6, NULL);
	printf("(__,----(_____Y\\__)\n");
	print_message("Art inspired by Row (www.asciiart.eu)");
}
