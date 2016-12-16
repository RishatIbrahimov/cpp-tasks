#include <iostream>

using namespace std;

int inversionsCount = 0;

void merge(int *begin, int *m, int *end, int *buffer) {
	int len = end - begin;
	int lenA = m - begin;
	int lenB = end - m;
	int i = 0, j = 0, k = 0;
	while (i < lenA && j - lenB) {
		if (begin[i] <= m[j]) {
			buffer[k++] = begin[i++];
		} else {
			inversionsCount += lenA - i;
			buffer[k++] = m[j++];
		}
	}
	while (i < lenA) {
		buffer[k++] = begin[i++];
	}
	while (j < lenB) {
		buffer[k++] = m[j++];
	}
	for (int l = 0; l < len; l++) {
		begin[l] = buffer[l];
	}
}


void merge_sort(int *begin, int *end, int *buffer) {
	if (end - begin > 1) {
		int *m = begin + (end - begin) / 2;
		merge_sort(begin, m, buffer);
		merge_sort(m, end, buffer);
		merge(begin, m, end, buffer);
	}
}

int main() {
	int n;
	cin >> n;
	int a[100000];
	int c[100000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	merge_sort(a, a + n, c);

	cout << inversionsCount << endl;
	return 0;
}