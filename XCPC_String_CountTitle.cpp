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

int main()
{
    int cnt = 0;
    getline(cin, s);
    for (decltype(s.size()) i = 0; i < s.size();i++)
    {
        if(isalpha(s[i]) || isdigit(s[i]))
            cnt++;
    }
    cout << cnt;
}