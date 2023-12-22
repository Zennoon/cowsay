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
		{"dog", print_dog},
		{"dragon", print_dragon},
		{"duck", print_duck},
		{"elephant", print_elephant},
		{"fish", print_fish},
		{"frog", print_frog},
		{"horse", print_horse},
		{"monkey", print_monkey},
		{"mouse", print_mouse},
		{"rabbit", print_rabbit},
		{"seahorse", print_seahorse},
		{"shark", print_shark},
		{"snake", print_snake},
		{"spider", print_spider},
		{"whale", print_whale}
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
       		for (i = 0; i < 18; i++)
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
		for (i = 0; i < 18; i++)
		{
			printf("\t%s\n", printer_funcs[i].animal);
		}
		exit(EXIT_FAILURE);
	}
	printer(center);
}
