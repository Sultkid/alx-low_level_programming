#include <stdio.h>
#include "3-function_like_macro.h"
int main (void)
{
	int r = ABS(-98) * 10;
	int x = ABS(98) * 10;
	printf("%d   %d\n", r, x);
	return(0);
}
