#ifndef MAIN_H
#define MAIN_H

/** libraries **/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/** colors **/
#define RESET "\e[0;39m"
//Regular background
#define BLKB "\e[40m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YELB "\e[43m"
#define BLUB "\e[44m"
#define MAGB "\e[45m"
#define CYNB "\e[46m"
#define WHTB "\e[47m"
//High intensty background
#define BLKHB "\e[0;100m"
#define REDHB "\e[0;101m"
#define GRNHB "\e[0;102m"
#define YELHB "\e[0;103m"
#define BLUHB "\e[0;104m"
#define MAGHB "\e[0;105m"
#define CYNHB "\e[0;106m"
#define WHTHB "\e[0;107m"
//Regular text
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
//High intensty text
#define HBLK "\e[0;90m"
#define HRED "\e[0;91m"
#define HGRN "\e[0;92m"
#define HYEL "\e[0;93m"
#define HBLU "\e[0;94m"
#define HMAG "\e[0;95m"
#define HCYN "\e[0;96m"
#define HWHT "\e[0;97m"
/** function prototypes **/
void execute_printer(int, char **, size_t);
void print_cow(size_t);
void print_dragon(size_t);


/** utility functions **/
size_t _strlen(char *);
int _strcmp(char *, char *);
void print_spaces(int, char *);
void print_char(char, int, char *);
size_t print_message(char *);

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
	void (*func)(size_t);
};
typedef struct animal_handlers animal_handlers;
#endif
