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

void bubbleSort(vector<int>& vec)
{
	bool swapped;
	for (int i = 0; i < vec.size() - 1; i++)
	{
		swapped = false;
		for (int j = 0; j < vec.size() - i - 1; j++)
		{
			if (vec[j] > vec[j + 1]) {
				swap(vec[j], vec[j + 1]);
				swapped = true;
			}
		}
		if (!swapped)
			break;
	}
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	vector<int>vec = { 64, 25, 12, 22, 11 };

	cout << "Given array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	bubbleSort(vec);
	cout << "\nSorted array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";

	return 0;
}