#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	printf("Enter two integers\n");
	printf("whether the first is a multiple of the second: ");
	scanf_s("%d %d", &i, &j);

	if (i % j == 0)
	{
		printf("%d is a mutiple of %d", i, j );
	}
	else
	{
		printf("%d is not a mutiple of %d", i, j);
	}
	system("pause");
	return 0;
}


