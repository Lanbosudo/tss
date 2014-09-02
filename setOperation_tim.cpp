#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <cctype>
#include <map>
#include <set>
using namespace std;
#define foreach(x, i) for (__typeof(x.begin()) i = x.begin(); i != x.end(); i ++)
struct Set
{
    set<int> s;
    void input() { int n; cin >> n; for (int i = 0, t; i < n; i ++) cin >> t, s.insert(t); }
    Set operator * (Set &o)
    {
        Set r; 
        foreach(o.s, i)if (s.find(*i) != s.end()) r.s.insert(*i);
        return r;
    }
    Set operator + (Set &o)
    {
        Set r; r.s = s;
        foreach(o.s, i) r.s.insert(*i);
        return r;        
    }
    Set operator - (Set &o)
    {
        Set r; r.s = s;
        foreach(o.s, i) if (s.find(*i) != s.end()) r.s.erase(*i);
        return r;
    }
    void print()
    {
         foreach(s, i) printf("%d ", *i);
         printf("\n");
     }
};
int main()
{
    Set a, b; a.input(), b.input();
    (a * b).print();
    (a + b).print();
    (a - b).print();
    return 0;
}
