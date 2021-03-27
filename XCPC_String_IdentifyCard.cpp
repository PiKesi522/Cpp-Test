#include <iostream>
#include <vector>
#include <string>

char a[10005];

using namespace std;

void judge(char *a)
{
    int temp = static_cast<int>(a[16]);
    if(temp % 2 == 1)
        cout << "Male" << endl;
    else
        cout << "Female" << endl;
}

int main()
{
    for (int i = 0; i < 18; i++)
    {
        cin >> a[i];
    }
    judge(a);
    return 0;
}