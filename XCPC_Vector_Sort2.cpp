#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,SUM,temp;
    cin >> N;
    vector<vector<int>> ls(N);

    for (int i = 0; i < N;i++)
    {
        cin >> SUM;
        for (int j = 0; j < SUM;j++)
        {
            cin >> temp;
            ls[i].push_back(temp);
        }
        sort(ls[i].begin(), ls[i].end());
    }

    sort(ls.begin(), ls.end());

    for (int i = 0; i < N;i++)
    {
        for(auto v : ls[i])
        {
            cout << v << ' ';
        }
        cout << endl;
    }
    
    return 0;
}