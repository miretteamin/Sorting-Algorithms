//T.C: O(n^2)

#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[], int n)
{
	int minIdx;

	for (int i = 0; i < n - 1; i++)
	{
		minIdx = i;
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[minIdx])
				minIdx = j;

		swap(&arr[minIdx], &arr[i]);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Given array: \n";
	printArray(arr, n);
	selectionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);

	return 0;
}