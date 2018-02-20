#include <iostream>
using namespace std;
void sieve(int n, int m) {
	bool *a = new bool[n + 1];
	int *b = new int[m];
	for (int i = 2; i < n + 1; ++i) {
		a[i] = true;
	}

	for (int i = 2; i * i <= n; ++i) {
		if (a[i]) {
			for (int j = i * i; j <= n; j += i) {
				a[j] = false;
			}
		}
	}

	int j = 0;
	for (int i = 2; i < n + 1; ++i) {
		if (a[i]) {
			cout << i << ' ';
			b[j] = i;
			++j;
		}
	}
	cout << endl;
	cout << b[m - 1] << endl;
	delete[] a;
	delete[] b;
}

int main() {
	int n, m;
	cin >> n >> m;
	sieve(n, m);
	system("pause");
	return 0;
}
