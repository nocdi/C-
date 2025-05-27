#include <iostream>
using namespace std;
int tinhtong(int a[100], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
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
	cout << "Tong cac so trong mang la: ";
	cout << tinhtong(a, n);
	return 0;
}
