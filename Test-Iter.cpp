#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
int main()
{   
    string s("some words");

    if(s.begin() != s.end())
    {
        auto it = s.begin();
        *it = toupper(*it);
    }

    
    for (auto it = s.begin(); it != s.end() && !isspace(*it);++it)
    {
        *it = toupper(*it);
    }
    cout << s << endl;
    
    return 0;
} 
*/

/*
void check_and_print(const vector<int>&vec)
{
    cout << "size: " << vec.size() << "  content: [";
    for (auto it : vec)
    {
        cout << it << ",";
    }
    cout << "]\n" << endl;
}

void check_and_print(const vector<string>& vec)
{

	cout << "size: " << vec.size() << "  content: [";
	for (auto it = vec.begin(); it != vec.end(); ++it)
    {
		cout << *it << (it != vec.end() - 1 ? "," : "");
    }
	cout << "]\n" << endl;
}

int main()
{
    vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };

    check_and_print(v1);
	check_and_print(v2);
	check_and_print(v3);
	check_and_print(v4);
	check_and_print(v5);
	check_and_print(v6);
	check_and_print(v7);

	return 0;
}
*/

/*
int main()
{
    vector<int> v1{1,1,2,4,5,6,7,32,6,13};
    for(auto &it : v1)
    {
        it = 2 * it;
    }
    for (auto it = v1.begin(); it != v1.end(); ++it)
    {
		cout << *it << (it != v1.end() - 1 ? "," : "");
    }
    return 0;
}
*/



int main()
{
    int score;
    vector<int> v1;
    while(cin >> score)
        v1.push_back(score);
    for (auto it = v1.begin(); it != v1.end() - 1;++it)
    {
        cout << *it + *(it + 1) << " ";
    }
    cout << endl;

    cout << "----------------------------------" << endl;

    auto beg = v1.begin();
    auto end = v1.end() - 1;
    while(beg < end)
    {
        cout << *beg + *end << " ";
        beg++;
        end--;
    }
    cout << endl;
    return 0;
}


/*
int main()
{
    vector<unsigned> scores(11, 0);
    auto beg = scores.begin();
    unsigned grade;
    while(cin >> grade)
        if(grade <= 100)
            ++*(beg + grade / 10);
    for (auto it = scores.begin(); it != scores.end();it++)
    {
        cout << *it << ((it == scores.end() - 1) ? "" : ",");
    }
    cout << endl;
}
*/