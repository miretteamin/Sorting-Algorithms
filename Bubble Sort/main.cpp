//T.C:O(n^2) 
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*a = temp;
}

void bubbleSort(int arr[], int n)
{
	bool swapped;
	for (int i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		// IF no two elements were swapped by inner loop, then break 
		if (swapped == false)
			break;
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

	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Given array: \n";
	printArray(arr, n);
	bubbleSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);

	return 0;
}