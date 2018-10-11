#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int	b;
	int	c;

	printf("Enter three integers\n");
	printf("I will show that the largest and smallest integer: ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	if (a >= b && b >= c)
	{
		printf("largest:%d  smallest:%d\n", a, c);
	}
	else if (a >= c && c >= b)
	{
		printf("largest:%d  smallest:%d\n", a, b);
	}
	else if (b >= c && c >= a)
	{
		printf("largest:%d  smallest:%d\n", b, a);
	}
	else if (b >= a && a >= c)
	{
		printf("largest:%d  smallest:%d\n", b, c);
	}
	else if (c >= a && a >= b)
	{
		printf("largest:%d  smallest:%d\n", c, b);
	}
	else if (c >= b && b >= a)
	{
		printf("largest:%d  smallest:%d\n", c, a);
	}
	system("pause");
	return 0;
}