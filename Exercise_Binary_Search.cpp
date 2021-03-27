#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{28, 46, 52, 80, 83, 112, 126, 150, 173, 179, 205, 211, 223, 248, 258, 263, 275, 288, 301, 308};
    auto beg = vec.begin();
    auto end = vec.end();
    auto mid = vec.begin() + (end - beg) / 2;
    int sought = 112;
    while(mid != end && *mid != sought)
    {
        if(sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2;
    }
    cout << ((mid == end) ? "Not found" : "Found") << endl;
    return 0;
}

/*迭代器之间只支持'-'的操作，但是对于迭代器和迭代器操作可以支持'+'和'-'*/