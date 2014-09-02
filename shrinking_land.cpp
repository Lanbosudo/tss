//************************************
//oj.tsinsen
//A1016.ËõĞ¡µÄÂ½µØ
//pi = 3.1416
//dS = 50
#include <cstdio>
#include <cmath>
#define pi 3.1416
using namespace std;

int main() {
	int num = 0;
	double distance[10000];

	scanf("%d", &num);
	double x, y;								//location of house
	for (int i = 0; i < num; i ++) {
		scanf("%lf %lf", &x, &y);
		distance[i] = x*x + y*y;				//record
	}

	for (int i = 0; i < num; i ++) {			// pi * distance * 1/2 <= n * 50, get the first n(or second, if house is on the edge)
		double n_value = distance[i] * pi / 100;
		printf("%d\n", (int) floor(n_value)+1); //floor: get the integer part of one double, still double
	}
	
	return 0;
}
