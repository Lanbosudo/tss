//*******************************
//oj.tsinsen
//A1018.²éÕÒÕûÊı
//
#include <cstdio>
using namespace std;

int main() {
	int memory[1000], num, toBeSearched;
	scanf("%d", &num);

	for (int i = 0; i < num; i ++) {
		scanf("%d", &memory[i]);
	}

	scanf("%d", &toBeSearched);
	for (int i = 0; i < num; i ++) {
		if (memory[i] == toBeSearched) {
			printf("%d\n", i+1);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}
