#include <iostream>

using namespace std;

int main() {
	int n;
	double s;
	int speed[1000];
	double supply[1000]; // л
	double consumption[1000];// л/100км

	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> speed[i] >> supply[i] >> consumption[i];
	}

	int mxSpeed = 0;
	int index = -1;

	for (int i = 0; i < n; i++) {
		if (supply[i] >= s / 100 * consumption[i]) {
			if (speed[i] > mxSpeed 
				|| (speed[i] == mxSpeed && consumption[i] < consumption[index])) 
			{
				mxSpeed = speed[i];
				index = i;
			}
		}
	}
	if (index == -1) {
		cout << "There is no acceptable cars" << endl;
	} else {
		cout << index + 1 << endl;
	}

	return 0;
}