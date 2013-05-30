// InsertionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//void InsertionSort(int value[], int N)
//{
//	for (int i = 1; i < N; i++)
//	{
//		int pos = i;
//		for (int j = i - 1; j >= 0; j--)
//		{
//			if (value[i] <= value[j])
//			{
//				pos = j;
//			}
//			else
//				break;
//		}
//
//		if (pos != i)
//		{
//			// value[i] 插入到pos的位置上
//			int temp = value[i];
//			for (int k = i; k > pos; k--)
//			{
//				value[k] = value[k - 1];
//			}
//			value[pos] = temp;
//		}
//	}
//
//	printf("\nInsertionSort:\n");
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", value[i]);
//	}
//}

void InsertionSort(int value[], int N)
{
	for (int i = 1; i < N; i++)
	{
		int temp = value[i];
		int j = i;
		// 这种情况 j + 1 是要插入的位置,value[j]已经比temp小了,不能动
		for (j = i - 1; j >= 0;)
		{
			if (temp <= value[j])
			{
				//移动
				value[j + 1] = value[j];
				j--;
			}
			else
				break;
		}
		value[j + 1] = temp;
		// 这种情况下j是要插入的位置,value[j-1]比temp小
		//while (j > 0 && value[j - 1] > temp)
		//{
		//	value[j] = value[j - 1];
		//	j--;
		//}
		//value[j] = temp;
	}

	printf("\nInsertionSort:\n");
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

	InsertionSort(value, 10);
	return 0;
}

