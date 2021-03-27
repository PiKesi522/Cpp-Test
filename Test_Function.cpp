#include <iostream>

using namespace std;

int fact(int x)
{
    x = abs(x);
    if(x == 1 || x == 0)
    {
        return 1;
    }
    else if(x > 1)
    {
        return x * fact(x - 1);
    }
}

int abs(int x)
{
    return (x < 0) ? -x : x;
}

int generate() //局部静态变量不会随着函数运行结束而消失，在下一次使用时可以继续使用
{
    static int ctr = 0;
    return ctr++;
}

/*int main()
{
    int x;
    cin >> x;
    cout << fact(x) << endl;
    return 0;
}
*/
