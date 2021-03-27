#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/*  一次读取一行
int main()
{
    string s;
    while(getline(cin,s)) 
    {
        cout << s << endl;
    }
    return 0;
}
*/


/*  一次读取一个单词
int main()
{
    string s;
    while(cin >> s)
    {
        cout << s << endl;
    }
    return 0;
}
*/

/*  判断字符串是否相同
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    if(s1 == s2)
    {
        cout << s1;
    }
    else
    {
        cout << ((s1 > s2) ? s1 : s2) << endl;
    }
    return 0;
}
*/

/* 判断字符串是否等长
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    if(s1.size() == s2.size())
    {
        cout << s1;
    }
    else
    {
        cout << ((s1.size() > s2.size()) ? s1 : s2) << endl;
    }
    return 0;
}
*/

/* 合并字符串
int main()
{
    string result,s;
    while(cin >> s)
    {
        result += s + ' ';
    }
    cout << result << endl;
    return 0;
}
*/

/* 统计字符串内标点符号个数
int main()
{
    string s = "this is a string!!!";
    decltype(s.size()) punct_cnt = 0; #int punct_cnt = 0;
    for(auto c : s)  #auto在此处可以看作char； :S可以看作是字符串S的字符遍历
    {
        if(ispunct(c))
            ++punct_cnt;
    }
    cout << punct_cnt << " punctuation characters in " << s << endl;
    return 0;
}
*/

/*  替换字符
int main()
{
    string s = "this is a string!!!";
    for(auto &ptr : s) #在需要修改字符串内容的时候，需要的是字符的地址指针以修改内容
    {
        if(ptr == ' ')
            continue;
        else
            ptr = 'X';
    }
    cout << s << endl;
    return 0;
}
*/

/*  比较while和for
int main()
{
	string s = "this is a string";

	decltype(s.size()) i = 0;
	while (i != s.size())
	{
		s[i] = 'X';
		++i;
	}
	cout << s << endl;
	for (i = 0; i != s.size(); ++i)
	{
		s[i] = 'Y';
	}
	cout << s << endl;
	return 0;
}
*/

/* 有问题
int main()
{
    string s = "this is a string!!!";
    for (decltype(s.size()) index  = 0; (index != s.size() && isspace(s[index])); ++index)
        (&s)[index] = toupper(s[index]);
    cout << s << endl;
    return 0;
}
*/

/* 转16进制 */
int main()
{
    const string Hex = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15:" << endl;
    string result;
    string::size_type n;
    while(cin >> n)
    {
        if(n < Hex.size())
        {
            result += Hex[n];
        }
    }
    cout << "You result is: " << result << endl;
    return 0;
}

