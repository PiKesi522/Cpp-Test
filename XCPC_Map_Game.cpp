#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <map>
#include <algorithm>

using namespace std;
typedef long long LL;

map<string,int> ls;
LL N;

/*
给出了N个单词，已经按长度排好了序。如果某单
词i是某单词j的前缀，i->j算一次接龙(两个相同的
单词不能算接龙)。
你的任务是：对于输入的单词，找出最长的龙。
【输入要求】
第一行为N。以下N行每行一个单词（由小写组
成），已经按长度排序。
【输出要求】
仅一个数，为最长的龙的长度。
【解题提示】
N≤50000 每个单词长度≤50
*/