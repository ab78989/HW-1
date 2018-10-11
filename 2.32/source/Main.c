#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, BMI;

	printf("Enter your weight and high: \n");
	scanf_s("%f %f", &a, &b);

	BMI = a / (b*b);
	printf("Your BMI is %f\n", BMI);

	if (BMI < 18.5) 
	{
		printf("Underweight\n");
	}
	else if (BMI >= 18.5 && BMI <= 24.9)
	{
		printf("Normal\n");
	}
	else if (BMI >= 25 && BMI <= 29.9)
	{
		printf("Overweight\n");
	}
	else if (BMI >= 30)
	{
		printf("Obese\n");
	}
	system("pause");
	return 0;
}