#include <stdio.h>;
#include <stdlib.h>;

int main(void) 
{
	int a1;
	float a2;
	printf("one integers:");
	scanf_s("%d", &a1);
	a2 = a1 % 2;
	if (a2==0) 
	{
		printf("this is even");
	}
	if(a2==1)
	{
		printf("this is odd");
	}
	system("pause");
	return 0;
}