#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int N, score, sum = 0, cnt = 0;
	double avg;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> score;
		if (score > 0) {
			cnt++;
			sum += score;
		}
	}

	avg = double(sum) / cnt;
	cout << int((avg * 10 + 0.5)) << '\n';

	return 0;
}