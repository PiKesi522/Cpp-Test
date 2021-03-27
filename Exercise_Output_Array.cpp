#include <iostream>
#include <vector>
#include <string>

using namespace std;
constexpr size_t row = 3;
constexpr size_t col = 4;

using int_array = int[4];

int arr[row][col] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}};

int main()
{
    //range for
    //using type alias
    for(const int (&row)[4] : arr)
    {
        for(auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << "---------------------" << endl;

    //for loop
    for (size_t i = 0; i != row; ++i)
    {
        for (size_t j = 0; j != col;j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "---------------------" << endl;

    //using pointer
    //using auto
    for(auto p = begin(arr); p != end(arr);++p)
    {
        for (auto q = begin(*p); q != end(*p);++q)
        {
            cout << *q << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
