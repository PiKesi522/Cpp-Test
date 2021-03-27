#include <iostream>
#include <string>

using namespace std;

//输入一个不超过10000位的正整数，输出它除以9的余数
//第一行输入一个正整数L，表示输入的位数
//第二行输入一个包含L位的正整数
//输出一个0~8的整数

//要点：一个数除以9的余数是其各位数字之和除以9

char a[10005];

long long user_sum(char *a,int L)
{
    long long cons = 0;
    for (auto i = 0; i < L;i++)
    {
        cons += (a[i] - 48);
    }
    return cons;
}


int main()
{
    int L;
    cout << "输入数字长度：";
    cin >> L;

    if(L > 0)
        cout << "输入数字：";
    for (int i = 0; i < L;i++)
    {
        cin >> a[i];
    }

    long long temp = user_sum(a,L);

    cout << "数字 ";
    for (int i = 0; i < L;i++)
    {
        cout << a[i];
    }
        cout << " 除以9的余数为：" << temp % 9 << endl;
    return 0;
}