#include <iostream>
#include <string>

using namespace std;

void judge(string s)
{
    int cnt = 0;

    for (decltype(s.size()) i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]))
            cnt++;
    }

    cout << cnt << endl;
}

int main()
{
    string s;
    getline(cin, s);
    judge(s);
    return 0;
}