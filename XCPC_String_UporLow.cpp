#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <map>
#include <algorithm>

using namespace std;

typedef long long LL;
LL N;
string s;
map<char, int> ls;

void UP_F()
{
    for (decltype(s.size()) i = 0; i < s.size(); i++)
    {
        if(islower(s[i]))
            s[i] = toupper(s[i]);
    }
}

void LOW_F()
{
    for (decltype(s.size()) i = 0; i < s.size(); i++)
    {
        if(isupper(s[i]))
            s[i] = tolower(s[i]);
    }
}

int main()
{
    cin >> s;

    int UP = 0,LOW = 0;
    for (decltype(s.size()) i = 0; i < s.size();i++)
    {
        if(isupper(s[i]))
            UP++;
        else
            LOW++;
    } 
    
    if(UP > LOW)
        UP_F();
    else
        LOW_F();

    cout << s;
}