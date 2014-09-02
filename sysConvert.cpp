//conert1.0 decimal from hexacimecal
#include <iostream>

using namespace std;

//hexacimecal decimal octonary binary
int convertToDec(char num) {
	if (num<=57)
		return (int) num - 48;
	else
		return (int) num - 65 + 10;
}

int convert(string h, int lengt) {
	int sum=0;
	for (int i=0; i < lengt; i ++) {
		sum*=16;
		sum+=convertToDec(h[i]);
	}
	return sum;
}

int main() {
	/*
	int count=0;
	char hex[11][100]={'\0'};
	for (int i=0; i < count; i ++) {
		getline(cin, hex[i]);
	}
	*/
	string hex;
	getline(cin, hex);
	int length=0;
	for (int i=0; hex[i]!='\0'; i ++) {
		length ++;
	}
	cout <<convert(hex, length);
	return 0;
}
