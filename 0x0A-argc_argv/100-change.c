#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry to the main program
 *
 * @argc: Argument count
 * @argv: Argument vector which is identical to one dimensional array
 *
 * Return: Returns success 0
 */
int main(int argc, char *argv[])
{
	int change(int coins[], int columns, int rows);

	int coins[5];
	int amount;

	amount = atoi(argv[1]);
	coins[0] = 1;
	coins[1] = 2;
	coins[2] = 5;
	coins[3] = 10;
	coins[4] = 25;

	if (argc < 2)
	{
		printf("Error");
	}
	else
	{
		printf("%d\n", change(coins, 5, amount));
	}

	return (0);
}
/**
 * change - Number of coin
 *
 * @coins: Coins
 * @columns: Columns for tabulation
 * @rows: Rows
 * Return: Returns success 0
 */
int change(int coins[], int columns, int rows)
{
	int i;
	int j;
	int a;
	int b;
	int tabulation[rows + 1][columns];

	for (i = 0; i < columns; i++)
	{
		tabulation[0][i] = 1;
	}

	for (i = 1; i < rows + 1; i++)
	{
		for (j = 0; j < columns; j++)
		{
			a = (i - coins[j] >= 0) ? tabulation[i - coins[j]][j] : 0;

			b = (j >= 1) ? tabulation[i][j - 1] : 0;

			tabulation[i][j] = a + b;
		}
	}

	return (tabulation[rows][columns - 1]);
}
