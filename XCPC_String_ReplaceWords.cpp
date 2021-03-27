#include <iostream>
#include <string>

using namespace std;
string sentence;

int main()
{
    char used, replace;

    cin >> sentence >> used >> replace;

    for (decltype(sentence.size()) i = 0; i < sentence.size();i++)
    {
        if(sentence[i] == used)
        {
            sentence[i] = replace;
        }
    }

    cout << sentence;
    return 0;
}