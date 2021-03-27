#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

deque<long long> ls;

void USER_INSERT_FRONT()
{
    long long X;
    cin >> X;
    ls.push_front(X);
    return;
}

void USER_INSERT_BACK()
{
    long long X;
    cin >> X;
    ls.push_back(X);
    return;
}

void USER_DELE_FRONT()
{
    if(ls.empty())
        return;
    else
        ls.pop_front();
    return;
}   

void USER_DELE_BACK()
{
    if(ls.empty())
        return;
    else
        ls.pop_back();
    return;
}

int main()
{
    long long N, OPT;
    cin >> N;

    for (long long i = 0; i < N;i++)
    {
        cin >> OPT;
        if(OPT == 0)
            USER_INSERT_FRONT();
        else if(OPT == 1)
            USER_DELE_FRONT();
        else if(OPT == 2)
            USER_INSERT_BACK();
        else if(OPT == 3)
            USER_DELE_BACK();
    }

    for (auto v = ls.begin(); v != ls.end(); v++)
    {
        cout << *v << ((v != ls.end() - 1) ? ' ' : '\n');
    }

    return 0;
}
