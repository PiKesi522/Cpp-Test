#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

int n;
deque<long long> height;
int ans = 0;

int main()
{
    int temp;
    cout << "有多少房子：";
    cin >> n;

    cout << "分别是多高：" << endl;
    for (int i = 0; i < n;i++)
    {
        cin >> temp;
        height.push_back(temp);
    }

    int MAX_HEIGHT = 0, MAX_LENGTH = 0;
    int Max_Left = 0, Max_Right = 0;

    for (int i = 0; i < n; i++)
    {
        MAX_HEIGHT = height[i];//假设目前的楼是最高楼
        Max_Left = 0;
        Max_Right = n - 1; //初始化

        for (int j = i; j >= 0;j--)//往👈找第一个矮的
        {
            if(height[j] < height[i])
            {
                Max_Left = j + 1;
                break;
            }
        }

        for (int j = i; j < n;j++)//往👉找第一个矮的
        {
            if(height[j] < height[i])
            {
                Max_Right = j - 1;
                break;
            }
        }

        MAX_LENGTH = Max_Right - Max_Left + 1;

        if (ans < MAX_HEIGHT * MAX_LENGTH)//更新答案
        {
            ans = MAX_LENGTH * MAX_HEIGHT;
        }
    }

    
    cout << "最大的面积是：" << ans << endl;

    return 0;
}