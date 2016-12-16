#include <iostream>

using namespace std;

int strlen(char *s) {
	int len = 0;
	while (s[len] != '\0') {
		len++;
	}
	return len;
}

void strcpy(char *dest, char *source) {
	int i = 0;
	while (source[i] != '\0') {
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
}

void strncpy(char *dest, char *source, int n) {
	int i = 0;
	while (source[i] != '\0' && i < n - 1) {
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
}

int strcmp(char *s, char *t) {
	int i = 0;
	while (s[i] == t[i] && s[i] != '\0') {
		i++;
	}
	return s[i] - t[i];
}

int main() {
	char s[20];
	char t[15];

	cin >> s >> t;

	cout << strlen(s) << endl << strlen(t) << endl;

	cout << s << endl << t << endl;

	cout << strcmp(s, t) << endl;

	strcpy(t, s);
	cout << s << endl << t << endl;

	strncpy(t, s, 5);
	cout << s << endl << t << endl;

	cout << strcmp(s, t) << endl;

	return 0;
}