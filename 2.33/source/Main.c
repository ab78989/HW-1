#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float miles, gollon, avgmiles, park, toll,total;

	printf("Enter your miles per day,cost per gallon of gasoline, \navg miles,parking fee and tolls: \n");
	scanf_s("%f %f %f %f %f", &miles, &gollon, &avgmiles, &park, &toll);

	total = (miles / avgmiles)*gollon + park + toll;
	printf("You spend %f on driving to work", total);

	system("pause");
	return 0;
}