#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	for (int i = a; i < b; i++) {
		//check if i is prime
		bool isPrime = true;
		for (int j = 2; isPrime && j * j <= i; j++) {
			if (i % j == 0) {
				isPrime = false;
			}
		}
		if (i != 1 && isPrime) {
			cout << i << endl;
		}
	}
	return 0;
}