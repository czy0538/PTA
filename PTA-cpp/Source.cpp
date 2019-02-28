#include<iostream>
#include<string>
#include<cctype>
#include<vector>
#include<cstddef>
using namespace std;
//c++版本PTA

//1006 换个格式输出整数
/*
int main()
{
	int in;
	cin >> in;
	int b, s, t;
	if (in >= 100)
	{
		b = in / 100;
		for (int i = 0; i != b; ++i)
		{
			cout << 'B';
		}
	}
	if (in >= 10)
	{
		s = (in % 100)/10;
		for (int i = 0; i != s; ++i)
		{
			cout << 'S';
		}
	}
	t = in % 10;
	{
		for (int i = 1; i!= t+1; ++i)
		{
			cout << i;
		}
	}
	cout << endl;
	return 0;
}
*/
//test github
//1007 素数对猜想 （20 分）
int main()
{
	int num[1229];
	int n;
	cin >> n;
	int j;
	int flag = -1;
	for (int i = 2; i != n; ++i)
	{
		for (j = 2; j != i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
			num[++flag] = i;
	}
	int count = 0;
	for (int i = 0; i != flag; ++i)
	{
		if ((num[i + 1] - num[i]) == 2)
			++count;
	}
	cout << count << endl;
	return 0;
}

//1009 说反话
/*
int main()
{
	vector<char> in;
	string temp;
	getline(cin,temp);
	auto size = temp.length;
	for (int i = size, j = 0; i != -1; --i)
	{
		while (temp[i] != ' ')
			j++;
		if (temp[i] = ' ')
		{
			for (int k = 0; k != j; ++k)
			{
				in.push_back(temp[i + k]);
				if (k == j - 1)
				{
					in.push_back(' ');
				}
			}

		}
	}
	cout << temp;
	return 0;

}
*/