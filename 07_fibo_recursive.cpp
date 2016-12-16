#include <iostream>

using namespace std;

//f_0 = f_1 = 1
int fibo(int n) {
	if (n <= 1) {
		return 1;
	}
	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int n;
	cin >> n;
	cout << fibo(n) << endl;
	return 0;
}