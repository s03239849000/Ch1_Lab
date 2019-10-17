#include <stdio.h>;
#include <stdlib.h>;

int main(void)
{
	float h1, w1,BMI,hh=0;
	printf("BMI Values\n");
	printf("your weight (kg):");
	scanf_s("%f",&w1);
	printf("your height (m) :");
	scanf_s("%f",&h1);
	printf("your BMI :%f",w1/(h1*h1));
	if ((w1 / (h1 * h1))<18.5) 
	{
		printf("\nUnderweight\n");
	}
	if (18.5<=(w1 / (h1 * h1))& (w1 / (h1 * h1)) <= 24.9)
	{
		printf("\nNormal\n");
	}
	if (25<=(w1 / (h1 * h1))& (w1 / (h1 * h1)) <=29.9)
	{
		printf("\nOverweight\n");
	}
	if ((w1 / (h1 * h1))>=30)
	{
		printf("\nObese\n");
	}
	system("pause");
	return 0;
}