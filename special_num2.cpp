#include <iostream>
using namespace std;

class myComplete {
public :
	int num;
	char name;
	int getNum();
	myComplete();
	~myComplete();
}

int main() {
	int spcl_num = 1000;
	for (; spcl_num <= 9999; spcl_num ++) {
		if ((spcl_num / 1000 == spcl_num % 10) &&
			(spcl_num / 100 % 10 == spcl_num % 100 / 10))
			cout << spcl_num << endl;
	}
	myComplete a;
	a.num = 0;
	return 0;
}
