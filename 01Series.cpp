#include <iostream>
using namespace std;

void countPlus(string &);
int main() {
	string s("000000");
	cout << s << endl;
	for (int i = 0; i < 63; i ++)
		countPlus(s);
	return 0;
}

void countPlus(string &s) {
	bool end = false;
	for (int i = 5; i > -1; -- i) {
		if (end)
			break;
		if (s[i] == '0') {
			s[i] = '1';
			end = true;
		}
		else {
			s[i] = '0';
		}
	}
	cout << s << endl;
}
