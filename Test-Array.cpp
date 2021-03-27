#include <iostream>
#include <vector>
#include <string>

using namespace std;

constexpr unsigned N = 3; //define N 3;

//C++中的数组与其他类型的数组不完全相同，在C++中，数组不可以改变长度


int main()
{
    int ia1[N] = {0, 1 ,2};
    int ia2[] = {0, 1, 2};
    int ia3[5] = {0, 1, 2};
    string sa1[N] = {"hello", "world"};
    //int ia5[2] = {0,1,2};
    char ca1[] = {'C', '+', '+'};
    char ca2[] = {'C', '+', '+','\0'};
    char ca3[] = {"C++"};
    //char ca4[N] = {"C++"};

    return 0;
}


/*
int main()
{
    unsigned scores[11] = {};
    unsigned grade;
    while(cin >> grade)
    {
        if(grade <+ 100)
            ++scores[grade / 10];
    }
}
*/

