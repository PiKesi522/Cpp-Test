/*
【输入要求】输入两行，为两个英文单词或中文拼音的字符串。
【输出要求】输出两行，将这两个字符串按从小到大的顺序输出。
【输入样例】 mouse
            elephant
【输出样例】 elephant
            mouse 
*/

#include <iostream>
#include <cstring>
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

void NamePK()
{
    cin >> s >> s1;

    (s < s1) ? (cout << s << endl << s1) : (cout << s1 << endl << s);

    return;
}


int main()
{
    NamePK();

    return 0;
}