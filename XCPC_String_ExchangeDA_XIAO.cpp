#include <iostream>
#include <string>

using namespace std;
string s;

int main()
{
    cin >> s;
    for (decltype(s.size()) i = 0; i < s.size(); i++)
    {
        if(islower(s[i]))
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }

    cout << s;
}