#include <iostream>
using namespace std;
int main() {
	int mang[20];
	int n, x, y;
	cout << "Nhap phan tu n: ";
	cin >> n;
	cout << "Nhap mang co " << n << " phan tu: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu a[" << i  << "]: ";
		cin >> mang[i];
	}
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	for (int i = n; i > x; i--) {
		if (i - 1 >= 0 && i < 20) {
			mang[i] = mang[i - 1];
		}
	}

	mang[x] = y;
	n++;

	cout << "Mang sau khi them z la: ";
	for (int i = 0; i < n; i++) {
		cout << mang[i] << " ";
	}
	cout << endl;

	return 0;
}
