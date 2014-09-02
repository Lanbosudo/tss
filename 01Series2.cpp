#include <iostream>
using namespace std;

void countPlus(string &, bool &);
int main() {
	string s("000000");
	bool divide_ = 0;
	for (int i = 0; i < 63; i ++)
		countPlus(s, divide_);
	return 0;
}

void countPlus(string &s, bool& divide) {
	bool end = false;
	for (int i = 5; i > -1; -- i) {
		if (end)
			break;
		if (s[i] == '0') {
			s[i] = '1';
			end = true;
			divide = !divide;
		}
		else {
			s[i] = '0';
			divide = !divide;
		}
	}
	if (divide)
		cout << s << endl;
}
