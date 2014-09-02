#include <cstdio>
//#include <>

void dfs(int sum, int one_cnt, int one_used);
int length = 0;
int result1 = 0, result2 = 0;

int main() {

    scanf("%d", &length);

    dfs(0, 0, 0);

    printf("%d\n%d\n", result1, result2);
    
    return 0;
}

void dfs(int sum, int one_cnt, int one_used) {
    if (sum > length) return;
    else if (sum == length) {
        result1 ++; result2 += one_cnt;
        return;
    }
    else {
        for (int i = 1; i < 4; i ++)
            if (i != one_used) 
                dfs(sum+i, one_cnt+(i==1), (i==1));
    }
}
