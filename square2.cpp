#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int line=0;
	int row=0;
	cin >> line >> row;

	char letters[25][25] = {'\0'};
	for (int i = 0; i < line; i ++) {
		for (int j = 0; j < row; j ++) {
			letters[i][j]=abs(j-i)+65;
			cout << letters[i][j];
		}
		cout << endl;
	}
	return 0;
}
