#include <iostream>
#include <cstring>

using namespace std;

bool is_anagram(char *s, char *t) {
	const int N = 256;
	int c[N];
	for (int i = 0; i < N; i++) {
		c[i] = 0;
	}
	int k = 0;
	while (s[k] != '\0') {
		c[s[k]]++;
		k++;
	}
	k = 0;
	while (t[k] != '\0') {
		c[t[k]]--;
		k++;
	}
	for (int i = 0; i < N; i++) {
		if (c[i] != 0) {
			return false;
		}
	}
	return true;
}

int main() {
	char s[1000];
	char t[1000];
	cin >> s >> t;
	cout << (is_anagram(s, t) ? "true" : "false") << endl;
	return 0;
}