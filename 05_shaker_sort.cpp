#include <iostream>

using namespace std;

int main() {
	int n;
	int a[1000];
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int start = 0, end = n - 1;

	bool swaped = true;
	int cnt = 0;
	while (swaped && start < end) {
		cnt ++;
		swaped = false;
		for (int i = start; i < end; i++) {
			if (a[i] > a[i + 1]) {
				int c = a[i + 1];
				a[i + 1] = a[i];
				a[i] = c;
				swaped = true;
			}
		}
		end--;
		for (int i = end; i > start; i--) {
			if (a[i - 1] > a[i]) {
				int c = a[i - 1];
				a[i - 1] = a[i];
				a[i] = c;
				swaped = true;
			}
		}
		start++;
	}
	cout << cnt << endl;

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}