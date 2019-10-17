#include <stdio.h>;
#include <stdlib.h>;

int main(void)
{
	float a1, a2, a3, a4, a5;
	printf("Total miles driven per day :");
	scanf_s("%f", &a1);
	printf("\nCost per gallon of gasoline :");
	scanf_s("%f", &a2);
	printf("\nAverage miles per gallon :");
	scanf_s("%f", &a3);
	printf("\nParking fees per day :");
	scanf_s("%f", &a4);
	printf("\nTolls per day :");
	scanf_s("%f", &a5);
	printf("\ntotal spend :%f\n", (((a1/a3)*a2))+a4+a5);

	printf("pause");
	return 0;
}