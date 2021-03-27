#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

typedef long long LL;

LL bin(LL x, LL n, LL MOD) { //快速求x的n次方对MOD取模的结果
    LL ret = MOD != 1;
    for (x %= MOD; n; n >>= 1, x = x * x % MOD)
        if (n & 1)
            ret = ret * x % MOD;
    return ret;
}

bool checkQ(LL a, LL n) {
    if (n == 2 || a >= n)
        return 1;
    if (n == 1 || !(n & 1))
        return 0;
    LL d = n - 1;
    while (!(d & 1))
        d >>= 1;
    LL t = bin(a, d, n);
    while (d != n - 1 && t != 1 && t != n - 1) {
        t = t * t % n;
        d <<= 1;
    }
    return t == n - 1 || d & 1;
}

bool prime(LL n) { 
    static vector<LL> t = {2, 325, 9375, 28178, 450775, 9780504, 1795265022};
    if (n <= 1)
        return false;
    for (LL k : t)
        if (!checkQ(k, n))
            return false;
    return true;
}