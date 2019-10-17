#include <stdio.h>;
#include <stdlib.h>;

int main(void) 
{
	int a1, a2, a3;
	printf("three integers :");
	scanf_s("%d %d %d",&a1,&a2,&a3);
	if (a1 <= a2 & a1 <= a3) 
	{
		printf("smallest : %d\n",a1);
	}
	if (a2 <= a1 & a2 <= a3) 
	{
		printf("smallest : %d\n",a2);
	}
	if (a3 <= a1 & a3 <= a2) 
	{
		printf("smallest : %d\n",a3);
	}
	system("pause");
	return 0;
}