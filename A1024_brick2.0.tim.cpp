#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <cctype>
#include <map>
#include <set>
using namespace std;

#define foreach(x, i) for (__typeof(x.begin()) i = x.begin(); i != x.end(); i ++)

int n, ans0 = 0, ans1 = 0;

void dfs(int step, int cnt, int one)
{
     if (step > n) return;
     if (step == n) ans0 ++, ans1 += cnt;
     for (int i = 1; i <= 3; i ++)
         if (i != one)
            dfs(step + i, cnt + (i == 1), i == 1);
}

int main()
{
    cin >> n;
    dfs(0, 0, 0);
    cout << ans0 << endl << ans1 << endl;
    return 0;
}
