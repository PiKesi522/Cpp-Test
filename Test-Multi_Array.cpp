#include <iostream>
#include <vector>
#include <string>

using namespace std;
constexpr size_t row = 3;
constexpr size_t col = 4;

/*
int main()
{
    int example_ia[10][20][30];//?????10??20????10*20??30???

    int all_ia[row][col] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}};

    int first_ia[row][col] = {{0}, {4}, {8}};

    all_ia[2][3] = example_ia[0][0][0];

    int(&row)[4] = all_ia[1];
}*/


/*
int main()
{
    int ia[row][col];
    for (size_t i = 0; i != row;++i)
    {
        for (size_t j = 0; j != col;++i)
        {
            ia[i][j] = i * col + j;
        }
    }

    int ia2[row][col];
    size_t cnt = 0;

    for(auto &row : ia2)
        for(auto &col : row)
        {
            col = cnt;
            ++cnt;
        }

    for(const auto &row : ia2)
    {
        for(auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
*/

int main()
{
    int ia[row][col] = {0};
    //int(*p)[4] = ia; //p??ia???????ia?????????????????4?int??
    //p = &ia[2];//p????ia???????????

    for (auto p = begin(ia); p != end(ia); ++p)//p????4??????
    {
        //q??4????????????q??????
        for (auto q = *p; q != *p + 4; ++q)
        {
            cout << *q << ' ';
        }
        cout << endl;
    }

    return 0;
}