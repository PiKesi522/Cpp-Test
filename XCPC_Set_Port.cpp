#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

set<long long> ls;

void port()
{
    int ti, ki;
    cin >> ti >> ki;

    if(ti < 0 || ti > 86400)
        return;

    int temp;
    for (int i = 0; i < ki;i++)
    {
        cin >> temp;
        ls.insert(temp);
    }

    cout << ls.size() << endl;
    ls.clear();

    return;
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N;i++)
        port();

    return 0;
}