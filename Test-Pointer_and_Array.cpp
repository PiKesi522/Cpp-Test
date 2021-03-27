#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string num[] = {"one", "two", "three"};
    string* p1 = &num[0];
    string* p2 = num;

    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto ia2(ia); //auto ia2 = ia; auto ia2(&ia[0]);

    decltype(ia) ia3 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //ia3 = p;
    ia3[4] = 8;

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = arr;
    ++p;
    int *e = &arr[10];

    for (int *b = arr; b != e;++b)
    {
        cout << *b << ",";
    }

    int *beg = begin(ia);
    int *last = end(ia);

    int *pbeg = begin(arr);
    int *pend = end(arr);
    while(pbeg != pend && *pbeg >= 0)
    {
        ++pbeg;
    }

    constexpr size_t sz = 5;
    int arr[sz] = {1, 2, 3, 4, 5};
    int *ip = arr; //int* ip = &arr[0];
    int *ip2 = ip + 4; //int* ip2 = &arr[4];

    auto n = end(arr) - begin(arr);

    int *b = arr;
    int *e = arr + sz;
    while(b < e)
    {
        ++b;
    }

    int ia[] = {0, 2, 4, 6, 8};
    int last = *(ia + 4); //int last = ia[0] + 4; int last = ia[4];
}

/*
int main()
{
    const int size = 10;
    int arr[size];
    for (auto ptr = arr; ptr != arr + size; ++ptr) 
        *ptr = 0;
    for (auto i : arr) 
        cout << i << " ";
    cout << endl;
    return 0;
}
*/