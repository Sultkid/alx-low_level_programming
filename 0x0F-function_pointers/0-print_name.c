#include "main"
/**
 * print_name - function 
 * @name: name
 * @f - pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	void (*myFunc)(char *) = &f;
	myFunc(name);
}
