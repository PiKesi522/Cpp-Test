#include <iostream>
#include <vector>

using namespace std;

vector<int> ls;

void inser()
{
    int X, Y;
    cin >> X >> Y;
    ls.insert(ls.begin() + X, Y);
}

void dele()
{
    int X;
    cin >> X;
    ls.erase(ls.begin() - 1 + X);
}

int main()
{
    int N, M;
    cin >> N >> M;
    int temp,OPT;
    for (int i = 0; i < N;i++)
    {
        cin >> temp;
        ls.push_back(temp);
    }

    for (int i = 0; i < M;i++)
    {
        cin >> OPT;
        if(OPT == 1)
            inser();
        else if(OPT == 2)
            dele();
    }

    for(auto v : ls)
    {
        cout << v << ' ';
    }
    return 0;
}


