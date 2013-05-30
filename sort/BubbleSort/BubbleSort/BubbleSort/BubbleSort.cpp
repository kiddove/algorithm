// BubbleSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"

// 

void BubbleSort_Ascend(int value[], int N)
{
	int temp=0;
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (value[i] > value[j])
			{
				temp = value[i];
				value[i] = value[j];
				value[j] = temp;
			}
		}
	}

	// print
	printf("\nBubbleSort_Ascend:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", value[i]);
	}
}

void BubbleSort_Descend(int value[], int N)
{
	int temp=0;
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (value[i] < value[j])
			{
				temp = value[i];
				value[i] = value[j];
				value[j] = temp;
			}
		}
	}

	// print
	printf("\nBubbleSort_Descend:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", value[i]);
	}
}

void BubbleSort(int value[], int N, bool direction)
{
	if (direction)
		BubbleSort_Ascend(value, N);
	else
		BubbleSort_Descend(value, N);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int value[10];
	printf("input 10 numbers:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &value[i]);
	}

	BubbleSort(value, 10, true);
	BubbleSort(value, 10, false);

	_getch();
	return 0;
}

