#include <iostream>

using namespace std;

void permutation(int pos, int n, int res, int used) {
	if (pos == n) {
		cout << res << endl;
	} else {
		for (int i = 1; i <= n; i++) {
			if ((used & (1 << i)) == 0) {
				permutation(pos+1, n, res*10 + i, used | (1 << i));
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	permutation(0, n, 0, 0);
	return 0;
}