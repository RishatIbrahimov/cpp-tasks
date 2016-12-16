#include <iostream>

using namespace std;


struct abiturient {
	int score;
	char name[255];
};

int main() {
	int n;
	abiturient a[1000];
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].score >> a[i].name;
	}

	//sort
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (
					(a[j].score < a[j + 1].score) 
					|| 
					(a[j].score == a[j + 1].score && strcmp(a[j].name, a[j+1].name) > 0)
				) {
				abiturient c = a[j + 1];
				a[j + 1] = a[j];
				a[j] = c;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i].score << " " << a[i].name << endl;
	}
}