#include<iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 2; i*i <= n; i++) {
    if (n % i == 0) {
      cout << "not prime" << endl;
      return 0;
    }
  }
  if (n == 1) {
    cout << "not prime" << endl;
  } else {
    cout << "prime" << endl;
  }
  return 0;
}
