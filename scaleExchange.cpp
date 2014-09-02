//hex to dec
#include <iostream>
using namespace std;

void output(int, bool = false);
int main() {
	int input, output1, output2;
	cin >> input;
	output1 = input / 16;
	output2 = input - (input / 16) * 16;
	output(output1, true);
	output(output2);
	cout << endl;
	return 0;
}

void output(int a, bool fir) {
	if (fir && a == 0)
		return;
	if (a < 10) {
		cout << a;
	}
	else {
		cout << (char) (a + 55);
	}
}
