#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	char* year = new char[4];
	cin >> year;
	int year_ = atoi(year);
	if (!(year_ % 400) || ((year_ % 400) && (year_ % 100) && !(year_ % 4)))
		cout << "yes\n";
	else
		cout << "no\n";
	return 0;
}
