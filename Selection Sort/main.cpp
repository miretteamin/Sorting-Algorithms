//T.C: O(n^2)

#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(vector<int>& vec)
{
	int minIdx;

	for (int i = 0; i < vec.size() - 1; i++)
	{
		minIdx = i;
		for (int j = i + 1; j < vec.size(); j++)
			if (vec[j] < vec[minIdx])
				minIdx = j;

		swap(&vec[minIdx], &vec[i]);
	}
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	vector<int>vec = { 64, 25, 12, 22, 11 };

	cout << "Given array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	selectionSort(vec);
	cout << "\nSorted array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";

	return 0;
}