//exchage from hex to dec, much bigger
//0 to FFFFFFFF
//modified on Apri 20, 2013
#include <iostream>
#include <string>

int scale(char);
int main() {
	std::string hex;
	long long int sum = 0;
	hex.clear();
	std::cin >> hex;
	while (*hex.begin()) {
		sum = scale(*hex.begin()) + sum * 16;
		hex.erase(hex.begin());
	}
	std::cout << sum << std::endl;
	return 0;
}

int scale(char in) {
	if ((int) in > 64)
		return (int) in - 55;
	else
		return (int) in - 48;
}
