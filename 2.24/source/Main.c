#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;

	printf("Enter the integer,tell odd or even:  ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf("%d is even", a);
	}
	else
	{
		printf("%d is odd", a);
	}
	printf("\n");
	system("pause");
	return 0;
}