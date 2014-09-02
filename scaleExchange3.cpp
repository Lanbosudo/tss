//divide num read by scale(also read from outside)
#include <cstdio>
#include <iostream>
#include <string>

char output(int);
int main() {
	int read, scale;
	bool end = true;
	std::string s;
	scanf("%d %d", &read, &scale);
	s.clear();
	while (read / scale || end) {
		s.insert(s.begin(), output(read % scale));
		end = read / scale;
		read /= scale;
	}
	std::cout << s << std::endl;
}

char output(int a) {
	if (a < 10) {
		return (char) (a + 48);
	}
	else {
		return (char) (a + 55);
	}
}
