#include <iostream>
#include <string>

using namespace std;

/*输入一行长度不超过250位的字符串，其中只有小写字母和空格，小写字母组成单词，单词之间只用
一个空格隔开，字符串的开始和结束都没有多余空格，输出长度最长的单词和最短的单词，若有多个单
词符合要求，只要求输出从前往后数第一个满足要求的单词。*/

//输入只有一行字符串，有小写字母和空格组成
//输出有两行字符串，第一行为最长的单词，第二行为最短的单词

int main()
{
    string s, zc, zd;
    int n, min, max;
    max = INT_MIN;
    min = INT_MAX;
    while(cin >> s)
    {
        n = s.size();
        if(n > max)
        {
            max = n;
            zc = s;
        }
        if(n < min)
        {
            min = n;
            zd = s;
        }
    }
    cout << zc << endl;
    cout << zd << endl;
    return 0;
}