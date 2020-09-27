#include <stdio.h>
#include <stdlib.h>
#define RAWS 5
#define COLUMNS 5

int main()
{
	int arr[RAWS][COLUMNS];
	int num = 0, target;

	for (int i = 0; i < RAWS; i++)
		for (int j = 0; j < COLUMNS; j++)
			scanf_s("%d", &arr[i][j]);

	printf("Search for: ");
	scanf_s("%d", &target);

	system("cls");
	for (int i = 0; i < RAWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	for (int i = 0; i < RAWS; i++)
		for (int j = 0; j < COLUMNS; j++)
		{
			if (arr[i][j] == target)
			{
				printf("[%d][%d]\n", i, j);
				num++;
			}
		}

	printf("Num: %d", num);
}