#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n;
    deque<int> cows;

    cin >> n;
    int temp;
    for (long long i = 0; i < n;i++)
    {
        cin >> temp;
        cows.push_back(temp);
    }

    int cal = 0;

    while(!cows.empty())
    {
        temp = cows.front();
        for (decltype(cows.size()) i = 1;i < cows.size(); i++)
        {
            if(temp <= cows[i])
                break;
            cal++;
        }
        cows.pop_front();
    }

    cout << cal << endl;
    return 0;
}