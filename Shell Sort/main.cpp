//T.C:O(n^2) 
//T.C for avg case: O(n^3/2)

#include <bits/stdc++.h>
using namespace std;

void shellSort(vector<int>& vec)
{
	int j, gap;
	for (gap = vec.size() / 2; gap > 0; gap /= 2) {

		for (int i = gap; i < vec.size(); i++) {
			int temp = vec[i];
			for (j = i; j >= gap && vec[j - gap] > temp; j -= gap)
				vec[j] = vec[j - gap];
			vec[j] = temp;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	vector<int>vec = { 64, 25, 12, 22, 11 };

	cout << "Given array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	shellSort(vec);
	cout << "\nSorted array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";

	return 0;
}