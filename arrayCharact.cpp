#include <iostream>
using namespace std;

int main() {
	int num = 0;
	int max, max_sec, min, min_sec, sum = 0;
	int got = 0;
	cin >> num;

	//for the sequence only one number
	if (num == 1) {
		cin >> got;
		cout << got << endl
			<< got << endl
			<< got * got;
		return 0;
	}

	//begin process
	for (int i = 0; i < num; ++ i) {
		cin >> got;

		//first time get in, set max and min
		if (!i) {
			max = got; min = got; sum += got * got;
			continue;
		}

		//second, set max_sec and min_sec
		if (i == 1) {
			if (max < got) {
				max_sec = max; max = got; sum += got * got;
				min_sec = got;
			}
			else {
				max_sec = got; min = got; min_sec = max; sum += got * got;
			}
			continue;
		}

		//other times, compare got and for numbers
		sum += got * got;
		if (got > max) {
			max_sec = max; max = got;
		}
		else if (got > max_sec) {
			max_sec = got;
		}
		if (got < min) {
			min_sec = min; min = got;
		}
		else if (got < min_sec) {
			min_sec = got;
		}
	}

	cout << max_sec << endl
		<< min_sec << endl
		<< sum << endl;
	return 0;
}
