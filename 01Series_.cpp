#include <iostream>
using namespace std;

int main() {
	clock_t t = clock();
	for (int a = 0; a < 2; ++ a) {
		for (int b = 0; b < 2; ++ b) {
			for (int c = 0; c < 2; ++ c) {
				for (int d = 0; d < 2; ++ d) {
					for (int e = 0; e < 2; ++ e) {
						for (int f = 0; f < 2; ++ f) {
							cout << a << b << c << d << e << f << endl;
						}
					}
				}
			}
		}
	}
	t = clock() - t;
	printf("cost time : %fs\n", (float)t / CLOCKS_PER_SEC);
	return 0;
}
