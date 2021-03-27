/*
【输入要求】第一行输入人数n。第二行起n行，每行为英文单词或中文拼音（字符串）。
【输出要求】输出n行，先输出序号，然后将这多个字符串按从小到大的顺序输出。
【输入样例】     5
                mouse
                elephant
                cat
                dog
                bird
【输出样例】     1 bird
                2 cat
                3 dog
                4 elephant
                5 mouse
*/

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
string s,s1;
map<char, int> ls;

int main()
{
    cin >> N;
    char ans[10005][10005];

    for (LL i = 0; i < N;i++)
        cin >> ans[i];

    for (LL i = 0; i < N - 1; i++)
    {
        for (LL j = i + 1; j < N; j++)
        {
            if (ans[i] > ans[j])
            {
                char temp[10005];
                *temp = *ans[i]; 
                *ans[i] = *ans[j]; 
                *ans[j] = *temp;
            }
        }
    }

    for (LL i = 0; i < N;i++)
        cout << i << ans[i] << endl;

    return 0;
}