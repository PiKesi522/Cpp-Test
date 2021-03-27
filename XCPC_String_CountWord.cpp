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

void count(char x)
{
    auto it = ls.find(x);

    if(it == ls.end())
        ls.insert(make_pair(x, 1));
    else
        it->second ++;

    return;
}

int main()
{
    cin >> s;

    for (decltype(s.size()) i = 0; i < s.size();i++)
    {
        if(isalpha(s[i]))
            count(s[i]);
    }

    for (auto it = ls.begin(); it != ls.end();it++)
    {
        cout << it->first << ':' << it->second << ' ';
    }
    cout << endl;

    return 0;
}