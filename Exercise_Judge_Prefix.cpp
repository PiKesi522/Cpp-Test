#include <iostream>
#include <vector>

using namespace std;

/*
假设有两个包含整数的vector对象，编写一段程序，检验其中一个vector对象是否是另一个的前缀。 
为了实现这一目标，对于两个不等长的vector对象，只需挑出长度较短的那个，把它的所有元素和
另一个vector对象比较即可。 例如，如果两个vector对象的元素分别是0、1、1、2 和 0、1、1、
2、3、5、8，则程序的返回结果为真。
*/

bool is_prefix(vector<int> const& lhs, vector<int> const& rhs)
{
    if(lhs.size() > rhs.size())
        return is_prefix(rhs, lhs);
    for(unsigned i = 0; i != lhs.size(); ++i)
        if(lhs[i] != rhs[i]) return false;
    return true;
}

int main()
{
    vector<int> l{ 0, 1, 1, 2 };
    vector<int> r{ 0, 1, 1, 2, 3, 5, 8 };
    cout << (is_prefix(r, l) ? "yes\n" : "no\n");

    return 0;
}