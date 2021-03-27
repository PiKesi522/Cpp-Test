#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long N, M;
    long long X, Y;
    cin >> N >> M;
    vector<vector<long long>> ls(N);
    for (long i = 0; i < M;i++)
    {
        cin >> X >> Y;
        ls[X - 1].push_back(Y);
    }
    for (long long i = 0; i < N;i++)
    {
        sort(ls[i].begin(), ls[i].end());
        decltype(ls[0].size()) size = ls[i].size();
        cout << size << ' ';
        if(size > 0)
        {
            for (auto v = ls[i].begin(); v != ls[i].end(); v++)
            {
                cout << *v << ((v != ls[i].end() - 1) ? ' ' : '\n');
            }
        }
        else if(size == 0)
        {
            cout << endl;
        }
    }
    return 0;
}