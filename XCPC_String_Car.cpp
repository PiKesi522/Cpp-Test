#include <iostream>
#include <string>

using namespace std;

/*五位由数字组成。假定以子做A、B、加啪左普所报这个任务交给贝负。请市区车牌，而以其他字母开
头的表示郊区车牌。车管所报这个任务交给贝贝。请你帮贝贝找出所给出的车牌中有多少辆是广州郊区
的汽车。*/

/*输入要求  第一行是一个正整数(1<=N<=100000)，表示共有N个车牌，接下来的N行，每行是一个车
牌号。题目保证给出的车牌不会重复。*/

/*输出要求只有一 行，即广州郊区车牌的数量。*/


int main()
{
    int num, cnt = 0;
    cin >> num;

    string key = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'R', 'S'};
    string s;
    for(int i = 0; i < num; i++)
    {
        cin >> s;
        for(auto v : key)
        {
            if(s[0] == v)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}