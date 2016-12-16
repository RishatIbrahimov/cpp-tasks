#include <iostream>

using namespace std;


struct mpair {
	int first;
	int second;
};

int main() {
	int n;
	mpair a[1000];
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}

	//sort
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if ((a[n - i].first < a[j].first) || (a[n - i].first == a[j].first && a[n - i].second < a[j].second)) {
				mpair c = a[n - i];
				a[n - i] = a[j];
				a[j] = c;
			}
		}
	}
	

	for (int i = 0; i < n; i++) {
		cout << a[i].first << " " << a[i].second << endl;
	}
}