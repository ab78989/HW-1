#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	int a, b;
	int x, y;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i == 1 || j==1 || j==9 || (i==5 && (j==2 || j==3 || j==4)) || (i==4 && j==4))
			{
				printf("G");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (a == 1 || a==5 || b==5)
			{
				printf("H");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for (x = 1; x <= 5; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			if (x == 1 || y == 1)
			{
				printf("L");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}



	system("pause");
	return 0;
}