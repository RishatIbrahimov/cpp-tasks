#include <iostream>

using namespace std;

int main() {
	int n;
	int a[1000];
	char s[1000];


	//rotate array
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n / 2; i++) {
		int c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	//rotate cstring
	cin >> s;
	int len = strlen(s);
	for (int i = 0; i < len / 2; i++) {
		char c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
	cout << s << endl;

	return 0;
}