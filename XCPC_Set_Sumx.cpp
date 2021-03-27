#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

set<long long> ls;

void sumx(int M)
{
    int cnt = 0;
    auto small = ls.begin();
    auto big = --ls.end();

    while(*small != *big)
    {
        if(*small + *big < M)
            ++small;
        else if(*small + *big > M)
            --big;
        else if(*small + *big == M)
        {
            cnt++;
            ++small;
            --big;
        }
    }

    cout << cnt << endl;

    return;
}

int main()
{
    int N;
    cin >> N;

    int temp;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        ls.insert(temp);
    }

    int M;
    cin >> M;

    sumx(M);

    return 0;
}