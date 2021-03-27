#include <iostream>
#include <string>
#include <vector>

using namespace std;

char a[10005];

//输入一个人的姓名并且以 * 结束，要求反序输出这个人的姓名

int main()
{
    vector<char> name;
    char temp;

    cout << "输入名字，并且以*结尾：";
    while(cin >> temp)
    {
        if(temp == '*')
            break;
        else
            name.push_back(temp);
    }

    if(name.begin() == name.end())
        cout << "名字为空!" << endl;
    else
    {
        cout << "其名字的逆置为：";
        for (auto v = name.end() - 1; v != name.begin() - 1; v--)
        {
            cout << *v;
        }
        cout << endl; 
    }
    return 0;
}