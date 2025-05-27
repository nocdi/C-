#include <iostream>
#include <cmath>
using namespace std;
bool nguyento(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			s = s + 1;
		}
	}
	return s == 2;
}
int main() {
	int a[100];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "boi so: ";
	for (int i = 0; i < n; i++) {
		if (nguyento(a[i])) {
			cout << a[i] << " ";
		}
	}
	cout << endl;
	return 0;
}
