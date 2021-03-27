#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <map>
#include <algorithm>
#define it multimap<string, int>::iterator;

using namespace std;
typedef long long LL;

multimap<string,int> ls;
long long N;

void check(string x)
{
    auto r = ls.equal_range(x);
    if(ls.count(x) == 0)
    {
        cout << "0|" << endl;
        return;
    }

    for (auto i = r.first; i != r.second;i++)
    {
        cout << i->second << ' ';
    }
    cout << '|' << endl;

    return;
}

int main()
{
    cin >> N;

    string stemp;
    int itemp;
    for (auto i = 0; i < N;i++)
    {
        cin >> stemp >> itemp;
        ls.insert(make_pair(stemp, itemp));
    }

    LL Q;
    cin >> Q;
    for (auto i = 0; i < Q;i++)
    {
        cin >> stemp;
        cout << '|' << stemp << ':';
        check(stemp);
    }

    return 0;
}