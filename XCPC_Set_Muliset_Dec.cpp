#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

multiset<long long> ls;
int N, C;

void DEC(int M)
{
    int cnt = 0;
    auto small = ls.begin();
    auto big = --ls.end();

    while(!ls.empty())
    {
        if(*big - *small < M)
        {
            ls.erase(*big);
            big = --ls.end();
        }
        else if(*big - *small > M)
        {
            big--;
        }
        else if(*big - *small == M)
        {
            cnt += ls.count(*small) + ls.count(*big) - 1;
            ls.erase(*big);
            ls.erase(*small);
            big = --ls.end();
        }
    }
    
    cout << cnt << endl;

    return;
}

int main()
{
    cin >> N >> C;
    int temp;

    for (int i = 0; i < N;i++)
    {
        cin >> temp;
        ls.insert(temp);
    }

    DEC(C);

    return 0;
}