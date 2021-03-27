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
输入要求    一行包含一个字符串。
输出要求    一行包含一个整数，表示该字符串中字母最多连续出现的次数。
输入样例    BAACA
输出样例    2
*/

int main()
{
    char temp = ' ';
    int cnt = 1,ans = 1;

    getline(cin, s);

    for (decltype(s.size()) i = 0; i < s.size(); i++)
    {
        if(islower(s[i]))
            s[i] = toupper(s[i]);
    }

    for (decltype(s.size()) i = 0; i < s.size();i++)
    {
        if(temp != s[i])
        {
            cnt = 1;
            temp = s[i];
        }
        else
        {
            cnt++;
            if(ans < cnt)
                ans = cnt;
        }        
    }

    cout << ans << endl;

    return 0;
}

