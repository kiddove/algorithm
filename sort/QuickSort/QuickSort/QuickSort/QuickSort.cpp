// QuickSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
#define ARR_SIZE 60

void GenerateRandNum(vector<int>& arr, int N)
{
	cout << "Original arr:" << endl;
	srand((unsigned int)time(NULL));

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i];
		if (i < N-1)
			cout << ", ";
	}
	cout << endl;
}

void PrintArr(vector<int>& arr, int N)
{
	for (int i = 0; i < N - 1; i++)
		cout << arr[i] << ", ";
	cout << arr[N-1] << endl;
}
// return the pos of pivot in the array
// if pos = 0 means the end
int GetPivot(int N)
{
	if (N > 1)
		return N / 2;
	else
		return 0;
}

void Swap(vector<int>& arr, int l, int r)
{
	int temp = arr[l];
	arr[l] = arr[r];
	arr[r] = temp;
}

void Partition(vector<int>& arr, int left, int right, int& pivot)
{
	// left, right 是索引值
	// 找到左，右各不符合的值，然后交换位置

	int temp = arr[pivot];
	while (left <= right)
	{
		while (arr[left] < temp)
			left++;
		while (arr[right] > temp)
			right--;

		if (left <= right)
		{
			Swap(arr, left, right);
			left++;
			right--;
		}
	}
	pivot = left;
}

void QuickSort(vector<int>& arr, int left, int right)
{
	if (left >= right)
		return;
	//if (left < 0 || right >= N)
	//	cout << "out of bounds" << endl;
	

	//int pivot = (right + left) / 2;	
	int pivot = left; // pivot = left;

	//cout << "left:" << left << ";";
	//cout << "right:" << right << ";";
	//cout << "pivot:" << pivot << endl;

	Partition(arr, left, right, pivot);
	//cout << endl;
	//PrintArr(arr, ARR_SIZE);

	// left
	QuickSort(arr, 0, pivot - 1);

	// right
	QuickSort(arr, pivot + 1, right);

}

int _tmain(int argc, _TCHAR* argv[])
{

	vector<int> arr;
	arr.assign(ARR_SIZE, 0);
	GenerateRandNum(arr, ARR_SIZE);
	//int k = 0;
	//arr[k++] = 76;
	//arr[k++] = 59;
	//arr[k++] = 59;
	//arr[k++] = 12;
	//arr[k++] = 77;
	//arr[k++] = 63;
	//arr[k++] = 33;
	//arr[k++] = 42;
	//arr[k++] = 63;
	//arr[k++] = 83;
	//arr[k++] = 13;
	//arr[k++] = 37;
	//arr[k++] = 18;
	//arr[k++] = 60;
	//arr[k++] = 43;
	//arr[k++] = 41;
	//arr[k++] = 74;
	//arr[k++] = 77;
	//arr[k++] = 50;
	//arr[k++] = 91;

	//PrintArr(arr, ARR_SIZE);
	QuickSort(arr, 0, ARR_SIZE - 1);
	cout << "result:" << endl;
	PrintArr(arr, ARR_SIZE);

	return 0;
}

