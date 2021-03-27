#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

const vector<int> cons = {5, 1, 3, 4, 10, 7, 15};
deque<int> temp;

int main()
{
    decltype(cons.begin()) beg, end;
    int sum_temp = 0;

    int i = 0;
    while(sum_temp < 15)
    {
        temp.push_back(*beg + i);
        i++;
    }
}