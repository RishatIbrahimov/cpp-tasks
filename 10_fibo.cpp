#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int prev = 0, cur = 1;
	for (int i = 1; i <= n; i++) {
		int c = prev + cur;
		prev = cur;
		cur = c;
	}

	cout << cur << endl;
	return 0;
}