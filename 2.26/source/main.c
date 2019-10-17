#include <stdio.h>;
#include <stdlib.h>;

int main(void)
{
	int a1, a2;
	float aa;
	printf("two integers :");
	scanf_s("%d %d", &a1, &a2);
	aa = a2 % a1;
	if (aa == 0)
	{
		printf("The first one is the second multiple\n");
	}
	if(aa!=0)
	{
	    printf("The first one is not the second multiple\n");
	}
	system("pause");
	return 0;
}