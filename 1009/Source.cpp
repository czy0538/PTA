#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string> str;
	string s;
	getline(cin, s);
	string::size_type flag = 0;
	string::size_type flag1 = 0;
	while (flag != string::npos)
	{
		string temp;
		flag1 = flag;
		flag = s.find(" ", flag + 1);
		temp = s.substr(flag1 + 1, flag - flag1 - 1);
		str.push_back(temp);
	}
	char ss = s[0];
	str[0] = ss + str[0];

	for (int j = str.size() - 1; j > -1; --j)
		cout << str[j] << " ";
	return 0;
}