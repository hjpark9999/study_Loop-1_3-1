#include <stdio.h>

void main()
{
	char star = '*';
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
		printf("%c", star);
		}
		printf("\n");

	}
}