#include <iostream>
#include <vector>

using namespace std;

/* vector容器初始化
int main()
{
    vector<string> articles = {"a", "an", "the"};
    vector<decltype(256)> int1(10); 创造整型vector，包含10个整型空间，全为空整型
    vector<decltype(128)> int2{10}; 创造整型vector，包含1个元素，为10
    vector<string> string1(10, "hi");
    return 0;
}
*/

/* 用户输入创建vector
int main()
{
    vector<int> v1;
    for (int i = 0; i <= 100;++i)
        v1.push_back(i);

    decltype(1) num1;
    vector<decltype(1)> v2;
    while(cin >> num1)
        v2.push_back(num1);

    string word;
    vector<string> text1;
    while(cin >> word)
        text1.push_back(word);
    return 0;
}
*/

/*
int main()
{
    vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto &i : v1)
        i *= i;
    for(auto i : v1)
        cout << i << " ";
    cout << endl;
    return 0;
}
*/

/*
int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while(cin >> grade)
        if(grade <= 100)
            ++scores[grade / 10];
}
*/

/*
int main()
{
    vector<int> v1(10, 42);
    vector<int> v2{10, 42};
    cout << "v1.size: " << v1.size() << endl;
    cout << "v2 content: ";
    for (decltype(v2.size()) i = 0; i < v2.size();++i)
    {
        cout << v2[i];
        if (i != v2.size() - 1)
            cout << ",";
    }
    cout << endl;


    cout << "v2.size: " << v2.size() << endl;
    cout << "v1 content: ";
    for (decltype(v1.size()) i = 0; i < v1.size();++i)
    {
        cout << v1[i];
        if (i != v1.size() - 1)
            cout << ",";
    }
    cout << endl;

    return 0;
}
*/

/*
int main()
{
    string input;
    vector<string> sentence;
    while(cin >> input)
    {
        sentence.push_back(input);
    }
    for(auto &str : sentence) 
    {
        for(auto &char_ : str)
        {
            char_ = toupper(char_);
        }
    }

    for(auto i : sentence)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
int main()
{
    vector<int> v1(10, 42);
    vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v3;
    for (int i = 0; i < 10; i++)
    {
        v3.push_back(10);
    }
    return 0;
}
*/

int main()
{
    int temp;
    vector<int> v1;
    while(cin >> temp)
    {
        v1.push_back(temp);
    }

    int flag = 0;
    (v1.size() % 2 == 1) ? flag = 1 : flag = 0; //判断奇偶个数

    if(flag)
    {
        vector<int> v2(v1.size()/ 2 + 1, 0);
        for (decltype(v2.size()) i = 0; i < v2.size(); ++i)
        {
            v2[i] = v1[2 * i] + v1[2 * i + 1];
        }
        v2[v2.size() - 1] = v1[v1.size() - 1];
        for(auto i : v2)
        {
            cout << i << ",";
        }
        cout << endl;
    }
    else
    {
        vector<int> v2(v1.size()/ 2, 0);
        for (decltype(v2.size()) i = 0; i < v2.size(); ++i)
        {
            v2[i] = v1[2 * i] + v1[2 * i + 1];
        }
        for(auto i : v2)
        {
            cout << i << ",";
        }
        cout << endl;
    }

    return 0;
}