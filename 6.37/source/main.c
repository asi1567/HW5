#include <stdio.h>
#include <stdlib.h>
#define N 100

int main(void)
{
	int a[N];
	int max = 0;
	char y;
	int j = 0;

	printf("Enter integer array: ");
	do
	{
		scanf_s("%d", &a[j]);
		j++;
	} while (y=getchar()!='\n');
	
	
	for (int i = 0; i < j; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}

	printf("The maximum value is:%d",max);
	system("pause");
	return 0;
}
