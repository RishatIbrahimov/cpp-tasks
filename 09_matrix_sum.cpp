#include <iostream>

using namespace std;

int main() {
	int n;
	int a[100][100];
	int s = 0, p = 1;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j) {
				p *= a[i][j];
			} else {
				s += a[i][j];
			}
		}
	}
	cout << s << " " << p << endl;
	return 0;
}