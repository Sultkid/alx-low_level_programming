#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <=10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >=10)
			{
				putchar(j = j / 10 + '0');
			}
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
