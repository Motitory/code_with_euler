#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	int arr[N + 1];
	int maxv, minv, far, near, sum;

	for (int i = 1; i <= N; i++)
		cin >> arr[i];

	maxv = minv = far = near = sum = arr[1];
	for (int i = 2; i <= N; i++) {
		maxv = (maxv < arr[i]) ? arr[i] : maxv;
		minv = (minv > arr[i]) ? arr[i] : minv;
		far = (abs(far) < abs(arr[i])) ? abs(arr[i]) : abs(far);
		near = (abs(near) > abs(arr[i])) ? abs(arr[i]) : abs(near);
		sum += arr[i];
	}

	cout << minv << " " << maxv << " " << far << " " << near << " " << sum << '\n';
	return 0;
}