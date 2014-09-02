#include <cstdio>
#include <cstdlib>
#include <iostream>
int render2(int);
int g(int);         // trying to use recurse function. too complicate
int h(int);
using namespace std;

int main() {
    int length = 0, result = 0;
    //result = render2(length);

    cin >> length;
    cout << render2(length) << endl;
    //cout << 2 << endl;

    return 0;
}

int render2(int length) {
    if (length < 6) {
        switch(length) {
            case 1: return 1;
            case 2: return 1;
            case 3: return 3;
            case 4: return 4;
            case 5: return 6;
            default: return 0;
        }
    }

    int result = 1;
    result = g(length) - h(length);
    return result;
}

int g(int a) {
    if (a < 4) {
        switch(a) {
            case 1: return 1;
            case 2: return 2;
            case 3: return 4;
            default: return 0;
        }
    }

    return g(a-1) + g(a-2) + g(a-3);
}

int h(int a) {
    if (a < 5) {
        switch(a) {
            case 1: return 0;
            case 2: return 1;
            case 3: return 1;
            case 4: return 3;
            default: return -1;
        }
    }

    return g(a-2) + h(a-2) + h(a-3)*2 + h(a-4);
}
