#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int m, n;
	cin >> m;
	cin >> n;
	vector<int> t;
	int temp;
	for (int i = 0; i < m; ++i)
	{
		cin >> temp;
		t.push_back(temp);
	}
	for (int i = m - n; i < m; ++i)
		cout << t[i] << " ";
	for (int i = 0; i < m - n; ++i)
		cout << t[i] << " ";
	return 0;
}