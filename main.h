#ifndef MAIN_H
#define MAIN_H

/** libraries **/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/** colors **/
#define GREEN "\e[38;2;255;255;255;1m\e[48;2;106;170;100;1m"
#define YELLOW "\e[38;2;255;255;255;1m\e[48;2;201;180;88;1m"
#define RED "\e[38;2;255;255;255;1m\e[48;2;220;20;60;1m"
#define RESET "\e[0;39m"

/** function prototypes **/
size_t _strlen(char *);
int _strcmp(char *, char *);
void print_spaces(int, char *);
void print_char(char, int, char *);
void print_message(char *);
/** structs **/

/**
 * struct animal_handlers - Holds different functions that handle printing
 * different animals
 * @animal: The animal name
 * @func: The function to print the animal
 */
struct animal_handlers
{
	char *animal;
	void (*func)();
};
typedef struct animal_handlers animal_handlers;
#endif
