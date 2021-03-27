#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <map>
#include <algorithm>

using namespace std;

map<int,string> ls;

int main()
{
    ls.insert(pair<int, string>(1, "a"));
    ls.insert(make_pair(5, "b"));
    ls[2] = "c";
    
    for (auto it = ls.begin(); it != ls.end();it++)
    {
        cout << it->first << ':' << it->second << ' ';
    }
    cout << endl;

    return 0;
}

