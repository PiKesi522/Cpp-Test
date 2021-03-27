/*
试题描述    输入正整数a,b（<=10的250次方），比较a和b的大小。
输入要求    第一行：a 第二行：b
输出要求    如果a>b，输出1；如果a=b，输出0；如果a <b，输出-1 。
输入样例    123 45
输出样例    1
*/
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
string s,s1;
map<char, int> ls;

int main()
{
    string a, b;
    cin >> a >> b;

    decltype(a.size()) sa, sb;
    sa = a.size();
    sb = b.size();

    if(sa > sb)
        cout << 1;
    else if(sa < sb)
        cout << -1;
    else if(sa == sb)
        for (decltype(a.size()) i = 0; i < a.size();i++)
        {
            if(a[i] > b[i])
            {
                cout << 1;
                break;
            }
            else if(a[i] < b[i])
            {
                cout << -1;
                break;
            }
        }

    return 0;
}