#include <iostream>
#include <regex>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void question1()
{
    string str = "hhh233";
    regex r("[a-z0-9]+");
    // a-z,0-9，出现至少一次
    // 判断str满不满足，以及其字串满不满足
    // str 中‘h’出现三次，‘2’出现一次，‘3’出现两次
    bool flag1 = regex_match(str, r);//完全匹配
    bool flag2 = regex_search(str, r);//字串匹配
    if(flag1 == flag2)
        cout << "good" << endl;
    return;
}

void question2() // C++11 不支持
{
    string str;
    cin >> str;
    //string str = "<email>860083450@qq.com<end>";
    regex e("([[:w:]]+)@[[:w:]]+)\\.com");// 判断满不满足 xxx@xxx.com的格式,
    smatch m;
    bool found = regex_search(str, m, e);// 根据【e】搜寻【str】，将字串和结果保留到【m】
    if(found)
    {
        cout << "m.size : " << m.size() << endl;// 【m】中元素个数
        for (int i = 0; i < (int)m.size();i++)
        {
            cout << "m.str(" << i << "): " << m.str(i) << endl;// .str查看捕获的字串，其中0为全字符串
        }
        cout << "m.prefix().str() : " << m.prefix().str() << endl; // 获取匹配开始前的所有字符串
        cout << "m.suffix().str() : " << m.suffix().str() << endl; // 获取匹配结束后的所有字符串
    }
    else
        cout << "Not Found!" << endl;
    return;
}

void question3()
{
    string pattern{"\\d{3}-\\d{8}|\\d{4}-\\d{7}"}; // 电话号码的模式 000 - 0000 000 或者 0000 - 0000 000
    regex re(pattern);

    vector<string> str{"010-12345678", "0319-9876543", "021-123456789"};
    for(auto temp : str)
    {
        bool ret = regex_match(temp, re);
         /* std::regex_match: 
            判断一个正则表达式(参数re)是否匹配整个字符序列str,它主要用于验证文本 
            注意，这个正则表达式必须匹配被分析串的全部，否则返回false;如果整个序列被成功匹配，返回true 
        */ 
        if(ret)
            fprintf(stderr, "%s can match\n", temp.c_str());
        else
            fprintf(stderr, "%s cannot match\n", temp.c_str());
    }
}

void question4()
{
    string pattern{"http|https://\\w*$"}; // url
    regex re(pattern);
    vector<string> str{ "http://blog.csdn.net/fengbingchun", "https://github.com/fengbingchun",
		"abcd://124.456", "abcd https://github.com/fengbingchun 123" };
    
	/* std::regex_search:
		类似于regex_match,但它不要求整个字符序列完全匹配
		可以用regex_search来查找输入中的一个子序列，该子序列匹配正则表达式re
	*/

    for(auto temp : str)
    {
        bool ret = regex_search(temp, re);
        if(ret)
            fprintf(stderr, "%s can search\n", temp.c_str());
        else
            fprintf(stderr, "%s cannot search\n", temp.c_str());
    }
}

void question5()
{
    string pattern{"[a-zA-Z]+://[^\\s]*"}; // url
    regex re(pattern);

	string str{ "my csdn blog addr is: http://blog.csdn.net/fengbingchun , my github addr is: https://github.com/fengbingchun " };
    smatch results;
    while(regex_search(str,results,re))
    {
        for(auto x : results)
        {
            cout << x << ' ';
        }
        cout << endl;
        str = results.suffix().str();
    }
}

void question6()
{
    string pattern{"\\d{18}|\\d{17}X"}; // identification card
    regex re(pattern);


	vector<string> str{ "123456789012345678", "abcd123456789012345678efgh",
		"abcdefbg", "12345678901234567X" };
	string fmt{ "********" };
 
	/* std::regex_replace:
		在整个字符序列中查找正则表达式re的所有匹配
		这个算法每次成功匹配后，就根据参数fmt对匹配字符串进行替换
	*/

    for(auto temp : str)
    {
        string ret = regex_replace(temp, re, fmt);
        fprintf(stderr, "src: %s, dst: %s\n", temp.c_str(), ret.c_str());
    }

}

void question()
{
    //question1(); 
    //question2();
    //question3(); 
    //question4();
    //question5();
    question6();
}

int main()
{
    question();
    return 0;
}