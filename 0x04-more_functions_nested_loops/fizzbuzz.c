#include <stdio.h>

int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{

		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("fizzbuzz");
		}
		else if (i % 3 == 0)
		{
			printf("fizz");
		}
		else if (i % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
