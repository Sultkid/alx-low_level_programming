#include "main.h"
int _isalpha(int c)
{
	int i;
	for (i = 0; i < c; i++)
	{
	if ((c == 'a' && c == 'z') || (c == 'A' && c == 'Z'))
	{	
		return c;
	}
	}
	return 0;
}
