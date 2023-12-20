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
	void (*printer)(size_t) = NULL;
	animal_handlers printer_funcs[] = {
		{"cow", print_cow},
		{"dragon", print_dragon}
	};
	if (ac == 2)
		printer = print_cow;
	else
	{
		char *animal;
		int i;

		if (!_strcmp(av[1], "-f"))
			animal = av[2];
		else
			animal = av[3];
		for (i = 0; i < 2; i++)
		{
			if (!_strcmp(animal, printer_funcs[i].animal))
			{
				printer = printer_funcs[i].func;
				break;
			}
		}
	}
	printer(center);
}
