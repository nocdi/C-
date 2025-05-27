#include <iostream>
#include <cmath>
using namespace std;
bool socp(int n) {
	// kiem tra so chinh phuong
	int can = sqrt(n);
	return can * can == n;
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
	cout << "Cac so chinh phuong trong mang la: ";
	for (int i = 0; i < n; i++) {
		if (socp(a[i])) {
			cout << a[i] << " ";
		}
	}
	return 0;
}
