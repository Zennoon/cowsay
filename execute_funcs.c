#include "main.h"

/**
 * execute_printer - Executes the appropriate function for the given animal
 * @ac: Argument Count (from main)
 * @av: Argument Vector (from main)
 * @center: The offset of the center of the message from the edge of the
 * terminal, used by the printing functions
 *
 * Return: void
 */
void execute_printer(int ac, char **av, size_t center)
{
	int i;
	void (*printer)(size_t) = NULL;
	animal_handlers printer_funcs[] = {
		{"bat", print_bat},
		{"cat", print_cat},
		{"cow", print_cow},
		{"dragon", print_dragon},
		{"duck", print_duck},
		{"fish", print_fish},
		{"rabbit", print_rabbit},
		{"spider", print_spider}
	};
	if (ac == 2)
		printer = print_cow;
	else
	{
		char *animal;

		if (!_strcmp(av[1], "-f"))
			animal = av[2];
		else
			animal = av[3];
       		for (i = 0; i < 8; i++)
	       	{
	       		if (!_strcmp(animal, printer_funcs[i].animal))
		       	{
		       		printer = printer_funcs[i].func;
			       	break;
			}
		}
	}
	if (printer == NULL)
	{
		printer = print_cow;
		printer(center);
		printf("Unavailable / Invalid animal name. ");
		printf("Available animals are: \n");
		for (i = 0; i < 8; i++)
		{
			printf("\t%s\n", printer_funcs[i].animal);
		}
		exit(EXIT_FAILURE);
	}
	printer(center);
}
