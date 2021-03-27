#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int Length_of_queue, Length_of_window, p, q;
    cin >> Length_of_queue >> Length_of_window >> p >> q;

    vector<int> cons = {1, 3, -1, -3, 5, 3, 6, 7};
    deque<int> temp;
    deque<int> ans(Length_of_queue - Length_of_window + 1);

    int ttemp = 1;
    for (int i = 1; i <= Length_of_queue;i++)
    {
        cons.push_back(ttemp);
        ttemp = (ttemp * p + i) % q;
    }

    for (int i = 1; i <= Length_of_queue;i++) //单调队列操作
    {
        while(!temp.empty() && cons[i] > cons[temp.back()])//若某一位比前一位大，则前一位比不可能再成为最大值，没有留在其中的必要，直接pop
            temp.pop_back();

        temp.push_back(i);

        while(temp.front() <= i - Length_of_window)
            temp.pop_front();

        ans[i] = cons[temp.front()]; //由于temp是单调序列，故窗口中的最大元素必为首元素
    }

    for (decltype(ans.size()) v = 2; v <= ans.size() + 1;v++)
    {
        cout << ans[v] << ' ';
    }

    return 0;
}
