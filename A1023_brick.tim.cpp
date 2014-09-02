#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <cctype>
#include <map>
#include <set>
using namespace std;
#define foreach(x, i) for (__typeof(x.begin()) i = x.begin(); i != x.end(); i ++)
int f[11];
int main()
{
    f[0] = f[1] = 1;
    int n;
    cin >> n;
    for (int i = 2; i <= n; i ++) f[i] = f[i - 1] + f[i - 2];
    cout << f[n] << endl;
    return 0;
}
