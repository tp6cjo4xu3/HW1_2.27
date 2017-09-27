#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i; int j;
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
	printf("*********\n");
	/*for (i = 1; i < 10; i++)
	{
		printf("\n");
		for (j = 1; j < i; j++)
			printf("*");
	}*/
	int num=5;
	//scanf_s("%d", &num);
	for ( i = 0; i <= num; i++)
	{
		for (j = 1; j <= num - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		for (j = 1; j <= (i - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
	
}