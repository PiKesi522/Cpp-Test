/*
【输入要求】两行，每行一个由大写字母组成的字符串每个字符串的长度不超过250。
【输出要求】一行，两个整数，分别表示两个字符串都出现的字母的总个数与同一位置上出现同一个字母的总个数。
【输入样例】ABACFGG     AAADCG
【输出样例】4    3
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
string s;
map<char, int> ls;
map<char, int> lsa;
map<char, int> lsb;

void count(char x)
{
    auto it = ls.find(x);

    if(it == ls.end())
        ls.insert(make_pair(x, 1));
    else
        it->second ++;

    return;
}

void print()
{
    cout << '|';
    for (auto it = ls.begin(); it != ls.end();it++)
    {
        cout << it->first << ':' << it->second << '|';
    }
    cout << endl;
    return;
}

int main()
{
    string sta, stb;
    int z1 = 0, z2 = 0, d;
    decltype(sta.size()) i;

    getline(cin,sta);
    getline(cin,stb);

    //比较相同数目
    for (i = 0; i < sta.size(); i++)
    {
        auto it = lsa.find(sta[i]);

        if(it == lsa.end())
            lsa.insert(make_pair(sta[i], 1));
        else
            it->second ++;
    }
    for (i = 0; i < stb.size(); i++)
    {
        auto it = lsb.find(stb[i]);

        if(it == lsb.end())
            lsb.insert(make_pair(stb[i], 1));
        else
            it->second ++;
    }

    for (i = 'A'; i <= 'Z'; i++)
        if(lsa.count(i) && lsb.count(i))
            z1 = z1 + min(lsa[i], lsb[i]);

            

    //比较相同位置
    if(sta.size() < stb.size())
        d = sta.size();
    else
        d = stb.size();

    for (int i = 0; i < d; i++)
        if (sta[i] == stb[i])
            z2++;

    cout << z1 << " " << z2 << endl;

    return 0;
}