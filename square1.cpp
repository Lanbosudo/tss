#include <iostream>
#include <cmath>

using namespace std;

/*
	void change(char& lttrs) {
	if ((int) lttrs <= 65) {
		lttrs += 1;
	}
	else {
		lttrs -= 1;
	}
}
*/

int main() {
	char letters[26][19] = {'\0'};
	/*
	for (int i = 0; i < 18; i ++) {
		letters[i] += i + 64;
	}
	*/
	for (int i = 0; i < 25; i ++) {
		for (int j = 0; j < 18; j ++) {
			letters[i][j]=abs(j-i)+65;
			cout << letters[i][j];
		}
		cout << endl;
	}
	return 0;
}
