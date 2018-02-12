#include <iostream>
using namespace std;
void sieve(int n) {
	int *a = new int[n + 1];
	for (int i = 0; i < n + 1; ++i) {
		a[i] = i;
	}
	for (int i = 2; i * i <= n; ++i) {
		if (a[i]) {
			for (int j = i * i; j <= n; j += i) {
				a[j] = false;
			}
		}
	}
	for (int i = 0; i < n + 1; ++i) {
		if (a[i] != 0) {
			cout << a[i] << ' ';
		}
	}
	delete[] a;
}

int main() {
	int n;
	cin >> n;
	sieve(n);
	system("pause");
	return 0;
}