#include <stdio.h>
#include <stdlib.h>
#define RAWS 5
#define COLUMNS 5

int main()
{
	int arr[RAWS][COLUMNS];
	int sum = 0;

	for (int i = 0; i < RAWS; i++)
		for (int j = 0; j < COLUMNS; j++)
			scanf_s("%d", &arr[i][j]);
	system("cls");

	for (int i = 0; i < RAWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}


	for (int i = 1; i < RAWS; i += 2)
		for (int j = 1; j < COLUMNS; j += 2)
			if (arr[i][j] % 2 == 1)
				sum += arr[i][j];

	printf("Sum: %d", sum);
}