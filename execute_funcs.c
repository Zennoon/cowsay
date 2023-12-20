#include "main.h"

/**
 * execute_funcs - Executes the appropriate function for the given animal
 * @ac: Argument Count (from main)
 * @av: Argument Vector (from main)
 *
 * Return: void
 */
void execute_funcs(int ac, char **av)
{
	void (*printer)(void) = NULL;
	animal_handlers printer_funcs[] = {
		{"cow", print_cow},
		{"dragon", print_dragon},
		{"duck", print_duck},
		{"tux", print_tux}
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
		for (i = 0; i < 4; i++)
		{
			if (!_strcmp(animal, printer_funcs[i].animal))
			{
				printer = printer_funcs[i].func;
				break;
			}
		}
	}
	printer();
}
