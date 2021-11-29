#include <stdio.h>
#include <stdlib.h>

int StringReverse(char str[]);


int main(void)
{
	char str[50];

	printf("Enter string: ");
	scanf_s("%s", str,_countof(str));

	StringReverse(str);

	system("pause");
	return 0;
}

int StringReverse(char str[])
{
	int i = 0, j = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	printf("\nReturn: ");

	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}

