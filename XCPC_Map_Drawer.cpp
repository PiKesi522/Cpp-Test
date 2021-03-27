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

void drawer(string x)
{
    auto it = ls.find(x);

    if(it == ls.end())
        ls.insert(make_pair(x, 1));
    else
        it->second ++;

    return;
}

void check()
{
    auto it = ls.begin();
    auto temp = ls.begin();
    for (auto i = 0; i < N;i++)
    {
        if(it->second < temp->second)
            it = temp;
    }

    cout << temp->first << endl;
    return;
}

int main()
{
    cin >> N;

    string temp;
    for (auto i = 0; i < N;i++)
    {
        cin >> temp;
        drawer(temp);
    }

    check();

    return 0;
}