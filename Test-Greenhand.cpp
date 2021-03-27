#include <iostream>

using namespace std;

int main()
{
    int curVal = 0;
    int num = 0;
    if(cin >> curVal)
    {
        int cnt = 1;
        while(cin >> num)
        {
            if(num == curVal)
                ++cnt;
            else
            {
                cout << curVal << " occurs " << cnt << " times" << endl;
                curVal = num;
                cnt = 1;
            }
        }
        cout << curVal << " occurs " << cnt << " times" << endl;
    }
    return 0;
}