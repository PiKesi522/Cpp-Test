#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <map>
#include <algorithm>

using namespace std;

map<long long,int> ls;
long long N;

void count(long long x)
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
    cin >> N;

    long long temp;
    for (long long i = 0; i < N;i++)
    {
        cin >> temp;
        count(temp);
    }

    cout << '|';
    for (auto it = ls.begin(); it != ls.end();it++)
    {
        cout << it->first << ':' << it->second << '|';
    }
    cout << endl;

    return 0;
}