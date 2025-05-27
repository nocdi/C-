#include <iostream>
using namespace std;
void boiso(int a[100], int n, int k) {
	for (int i = 0; i < n; i++) {
		if (a[i] % k == 0) {
			cout << a[i] << " ";
		}
	}
	cout << endl;
}
int main() {
	int a[100];
	int n, k;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap k: ";
	cin >> k;

	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Cac phan tu la boi cua " << k << " trong mang: ";
	boiso(a, n, k);
	return 0;
}
