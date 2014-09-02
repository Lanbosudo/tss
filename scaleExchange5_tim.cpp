#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <cctype>
using namespace std;
char charBit(int num)
{
    return num < 10 ? num + '0' : num - 10 + 'A';
}
int char2Num(char ch)
{
    return (ch >= '0' && ch <= '9') ? ch - '0' : ch - 'A' + 10;
}
int main()
{
    int n; cin >> n;
    for (int caseid = 0; caseid < n; caseid ++)
    {
        static char a[100010], b[500010], c[200010];
        cin >> a; int lena = strlen(a), lenb = 0, lenc = 0;
        reverse(a, a + lena);
        for (int i = 0; i < lena; i ++)
            for (int j = 0, t = char2Num(a[i]); j < 4; j ++)
                b[lenb ++] = t & 1, t >>= 1;
        b[lenb] = b[lenb + 1] = 0;
        for (int i = 0; i < lenb; i += 3)
            c[lenc ++] = b[i] + b[i + 1] * 2 + b[i + 2] * 4;
        while (lenc && c[lenc - 1] == 0) lenc --;
        for (int i = lenc - 1; i >= 0; i --)
            printf("%d", c[i]);
        printf("\n");
    }
    return 0;
}
