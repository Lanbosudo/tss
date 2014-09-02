//*************************************//
//oj.tsinsen.com
//杨辉三角形
//
#include <iostream>
using namespace std;

int main() {
	int line=0;
	int tri_line[35]={1};

	cin >> line;
	for (int j=0; j<line; j++) {			//recursively get lines above
		if (true) {							//print current line
			for (int i=0; tri_line[i]!=0; i++)
				cout << tri_line[i] << ' ';
			cout << endl;
			if (j == line-1)
				break;
		}
		for (int i=j+1; i > 0; i --) {		//get the next line
			tri_line[i] += tri_line[i-1];
		}
	}
	return 0;
}
