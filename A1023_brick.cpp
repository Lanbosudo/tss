#include <cstdio>
int render(int);

int main() {
    int length;
    scanf("%d", &length);
    printf("%d\n", render(length));
    return 0;
}

int render(int length) {
    if (length == 1)
        return 1;
    else if (length == 2)
        return 1+1;
    else
        return render(length-1)+render(length-2);
}
