#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

set<long long> ls;
int N;

int main()
{
    cin >> N;

    int temp;
    for (int i = 0; i < N;i++)
    {
        cin >> temp;
        ls.insert(temp);
    }

    cout << ls.size() << endl;
    for (auto v = ls.begin(); v != ls.end(); v++)
    {
        cout << *v << ((v != ls.end()--) ? ' ' : '\n');
    }

    return 0;
}