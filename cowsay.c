#include "main.h"

/**
 * main - The entry point of the program
 * @ac: Argument Count
 * @av: Argument Vector
 *
 * Return: If invalid arguments given, 1 (Failure), otherwise 0 (Success)
 */
int main(int ac, char **av)
{
	size_t center;

	if (!(ac == 2 || ac == 4))
	{
		printf("Usage: %s MESSAGE [-f ANIMAL]\n", av[0]);
		return (EXIT_FAILURE);
	}
	if (ac == 2)
		center = print_message(av[1]);
	else
	{
		if (!_strcmp(av[1], "-f"))
			center = print_message(av[3]);
		else if (!_strcmp(av[2], "-f"))
			center = print_message(av[1]);
		else
		{
			printf("Usage: %s MESSAGE [-f ANIMAL]\n", av[0]);
			return (EXIT_FAILURE);
		}
	}
	execute_printer(ac, av, center);
	return (0);
}
