#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <map>
#include <algorithm>

using namespace std;

map<string,int> ls;
long long N;
long long Q;

int main()
{
    cin >> N >> Q;

    string stemp;
    int itemp;

    for (auto i = 0; i < N; i++)
    {
        cin >> stemp >> itemp;
        ls.insert(make_pair(stemp, itemp));
    }

    for (auto i = 0; i < Q;i++)
    {
        cin >> stemp;
        auto it = ls.find(stemp);
        cout << it->second << endl;
    }

    return 0;
}