#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> ls;

void user_insert()
{
    int X, Y;
    cin >> X >> Y;
    ls.insert(ls.begin() + X, Y);
    return;
}

void user_delete()
{
    int X;
    cin >> X;
    ls.erase(ls.begin() - 1 + X);
    return;
}

void user_sort()
{
    int X, Y;
    cin >> X >> Y;
    sort(ls.begin() + X - 1, ls.begin() + Y);
    return;
}

void user_reverse()
{
    int X, Y;
    cin >> X >> Y;
    reverse(ls.begin() + X - 1, ls.begin() + Y);
    return;
}

void user_specific_delete()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;
    ls.erase(remove(ls.begin() + X - 1, ls.begin() + Y, Z), ls.begin() + Y);
    //（X,Z,Y,Z,Y) -> (X,Y,Y,Z,Z) REMOVE的作用：把范围内Z放于最后，指向第一个Z和
    //最后一个Z加一位
    return;
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
            user_insert();
        else if(OPT == 2)
            user_delete();
        else if(OPT == 3)
            user_sort();
        else if(OPT == 4)
            user_reverse();
        else if(OPT == 5)
            user_specific_delete();
    }

    for (auto v = ls.begin(); v != ls.end(); v++)
    {
        cout << *v << ((v != ls.end() - 1) ? ' ' : '\n');
    }

    return 0;
}


