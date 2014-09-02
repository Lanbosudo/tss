//*******************************
//oj.tsinsen
//A1019.Ã¶¾Ù×Ö´®
//
#include <cstdio>
#define stringA 65
using namespace std;

int main() {
	for (int i = 0; i < 4; i ++)
		for (int j = 0; j < 4; j ++)
			for (int k = 0; k < 4; k ++)
				for (int l = 0; l < 4; l ++) {
					printf("%c", stringA+i);
					printf("%c", stringA+j);
					printf("%c", stringA+k);
					printf("%c\n", stringA+l);
				}
	return 0;
}
