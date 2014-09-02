#include <cstdio>
#include <iostream>
#include <string>

//put every string read to oct and print
void ex(std::string);
//exchange from hex to binary ** maybe a function from bin to oct will be needed
char *hexBin(char);
int main() {
	int count = 0;
	std::string numString;
	numString.clear();
	scanf("%d", &count);
	for (int i = 0; i < count; ++ i) {
		std::cin >> numString;
		ex(numString);
	}
	return 0;
}

void ex(std::string &string) {
	std::string bin;
	bin.clear();
	for (int i = 0; i < bin.length(); ++ i) {

	}
}

char *hexBin(char hex) {
}
