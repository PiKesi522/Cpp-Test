#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,M,temp;
    cin >> N >> M;
    vector<int> ls;
    for (int i = 0; i < N;i++)
    {
        cin >> temp;
        ls.push_back(temp);
    }

    int X, Y;
    for (int i = 0; i < M;i++)
    {
        cin >> X >> Y;
        reverse(ls.begin() + X - 1, ls.begin() + Y);
    }
    for(auto v : ls)
    {
        cout << v << ' ';
    }
    cout << endl;
    return 0;
}