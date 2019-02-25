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