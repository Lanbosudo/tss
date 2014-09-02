//hex to dec, bigger number
#define seven 268435456
#define six 16777216
#define five 1048576
#define four 65536
#define three 4096
#define two 256
#define one 16
#include <cstdio>
#include <iostream>

void output(int);
int main() {
	int read;
	int scaleNum[8] = {seven, six, five, four, three, two, one, 1};
	bool first = false;
	scanf("%d", &read);
	for (int i = 0; i < 8; ++ i) {
		int left = read / scaleNum[i];
		if (!first && left)
			first = !first;
		if (first)
			output(left);
		read -= left * scaleNum[i];
	}
	if (!first)
		std::cout << "0";
	std::cout << std::endl;
	return 0;
}

void output(int a) {
	if (a < 10) {
		std::cout << a;
	}
	else {
		std::cout << (char) (a + 55);
	}
}
