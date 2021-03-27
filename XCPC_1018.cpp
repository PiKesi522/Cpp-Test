#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

set<long long> ls;

void USER_DELE()
{
    long long x;
    cin >> x;

    ls.erase(x);
    return;
}

void USER_ADD()
{
    long long x;
    cin >> x;

    ls.insert(x);
    return;
}

int main()
{
    int N;
    cin >> N;

    long long temp;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        switch (temp)
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

    for (auto v = ls.begin(); v != ls.end(); v++)
    {
        cout << *v << ((v != ls.end()--) ? ' ' : '\n');
    }

    return 0;
}