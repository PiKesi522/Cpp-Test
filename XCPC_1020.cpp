#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <map>
#include <algorithm>

using namespace std;
typedef long long LL;

multimap<string,string> ls;
LL N;

void USER_ADD()
{
    string name, phnum;
    cin >> name >> phnum;
    ls.insert(make_pair(name, phnum));
    return;
}

void USER_DELE()
{
    string name;
    cin >> name;
    auto range = ls.equal_range(name);
    ls.erase(range.first, range.second);
    return;
}

void print()
{
    auto range = ls.equal_range(ls.begin()->first);
    cout << ls.begin()->first << ' ';
    for (auto it = range.first; it != range.second; it++)
    {
        cout << it->second << ((it == range.second) ? '\n' : ' ');
    }
    cout << endl;
    ls.erase(range.first, range.second);
}

int main()
{
    cin >> N;
    unsigned short OPT;
    for (LL i = 0; i < N;i++)
    {
        cin >> OPT;
        switch (OPT)
        {
            case 0:
                USER_ADD();
                break;
            
            case 1:
                USER_DELE();
                break;

            default:
                break;
        }
    }

    while(!ls.empty())
        print();

    return 0;
}