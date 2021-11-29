#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice(void);

int main(void)
{
	int i;
	int count = 0;
	srand(time(NULL));

	rollDice();

	for ( i = 0; i <= 35999; i++)
	{
		printf("Array[%d] = %d\n",i, rollDice());
		if (rollDice() == 7)
		{
			count = count + 1;
		}
	}
	printf("7點共有%d次", count);
	system("pause");
	return 0;
}

int rollDice(void)
{
	int die1, die2, sum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	sum = die1 + die2;

	return sum;
}