#include <iostream>

using namespace std;

// a^x
int pow(int a, int x) {
	if (x == 0) {
		return 1;
	}
	int res = pow(a, x / 2);
	res *= res;
	if (x % 2 == 1) {
		res *= a;
	}
	return res;
}

int main() {
	int a, x;
	cin >> a >> x;
	cout << pow(a, x) << endl;
	return 0;
}