#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, a, b, c;
	printf("number\tsquare\tcube\n");
	for (i = 0; i <= 10; i++)
	{
		a = i;
		b = i * i;
		c = i * i * i;
		printf("%d\t%d\t%d\n", a, b, c);
	}
	system("pause");
	return 0;
}