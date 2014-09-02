#include <cstdio>

int main() {
    int timeCount = 0;
    scanf("%d", &timeCount);

    printf("%d:%d:%d\n", timeCount/3600, timeCount%3600/60, timeCount%60);
    return 0;
}
