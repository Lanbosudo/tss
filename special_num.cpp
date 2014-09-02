#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num = 100;
	for (; num <= 999; num ++) {
		if (num == pow((double) (num / 100), 3) +
				pow((double) (num % 100 / 10), 3) +
				pow((double) (num % 10), 3))
			cout << num << endl;
	}
	return 0;
}
