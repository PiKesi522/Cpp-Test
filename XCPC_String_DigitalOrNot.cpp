#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (decltype(s.size()) i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]))
            continue;
        else
        {
            cout << "Not Digital！" << endl;
            return 0;
        }
    }
    cout << "Digital!" << endl;
    return 0;
}
