#include <stdio.h>
#include <stdlib.h>
/**
 *print_name - function that prints a name
 *@name: poiteurs
 *@f: fonction pointeur
 *Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	(*f)(name);
}
