#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*编写一段程序，从标准输入中读取string对象的序列直到连续出现两个相同的单词或者所有的单词
都读完为止。 使用while循环一次读取一个单词，当一个单词连续出现两次时使用break语句终止循
环。 输出连续重复出现的单词，或者输出一个消息说明没有任何单词是连续重复出现的。*/

int main()
{
    string read, temp;
    while(cin >> read)
    {
        if(read == temp)
        {
            if(read[0] <= 'Z' && read[0] >= 'A')
                break;
            else
                continue;
        }
        else
            temp = read;
    }

    if (cin.eof())  
        cout << "no word was repeated." << endl; //eof(end of file)判断输入是否结束,或者文件结束符,等同于 CTRL+Z
    else            
        cout << read << " occurs twice in succession." << endl;
    return 0;
}