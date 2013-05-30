// Selectionsort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void Selectionsort(int value[], int N)
{
	for (int i = 0; i < N; i++)
	{
		int min = i;
		for (int j = i + 1; j < N; j++)
		{
			if (value[j] < value[i])
			{
				min = j;
			}
		}
		
		if (i != min)
		{
			int temp = value[i];
			value[i] = value[min];
			value[min] = temp;
		}
	}

	//
	printf("\nSelectionsort:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", value[i]);
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	//int value[10];
	//printf("input 10 numbers:\n");
	//for (int i = 0; i < 10; i++)
	//{
	//	scanf_s("%d", &value[i]);
	//}
	int value[10] = {1, 4, 3, 2, 5, 7, 9, 0, 6, 8};

	Selectionsort(value, 10);
	return 0;
}

