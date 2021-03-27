#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <map>
#include <algorithm>

using namespace std;

typedef long long LL;
LL N;
string s;
map<char, int> ls;

/*
【试题描述】
给定一个只有小写字母的字符串，找到它的第一个不重复的字符，并输出它的位置。如果不存在，则输出 -1。

【输入要求】    一个字符串
【输出要求】    一个数字
【输入样例】    goodafternoon
【输出样例】    0
*/

int check(unsigned long long x)
{
    if(s[x] != s[x+1])
        return 1;
    else
        return 0;
}

int main()
{
    getline(cin, s);
    
    for (decltype(s.size()) i = 0; i < s.size() - 1;i++)
    {
        if(check(i) == 1)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}