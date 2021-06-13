#include <bits/stdc++.h>
using namespace std;

void countSort(vector<int>& vec)
{

}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	vector<int>vec = { 64, 25, 12, 22, 11 };

	cout << "Given array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	quickSort(vec, 0, vec.size() - 1);
	cout << "\nSorted array: \n";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";

	return 0;
}