#ifndef MAIN_H
#define MAIN_H

/** libraries **/
#include <stdio.h>
#include <stdlib.h>

/** function prototypes **/

/** structs **/
struct animal_handlers
{
	char *animal;
	void (*func)();
};

#endif
