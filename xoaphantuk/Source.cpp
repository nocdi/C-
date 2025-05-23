#include <iostream>
using namespace std;
int main() {
	int mang[20];
	int n, k;
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i< n; i++) {
		cout << "Nhap phan tu thu a[" << i + 1 << "]: ";
		cin >> mang[i];
	}
	cout << "Nhap so phan tu k: ";
	cin >> k;
	for (int i = k; i < n - 1; i++) {
		mang[i] = mang[i + 1];
	}
	n--;
	cout << "Mang sau khi xoa la: ";
	for (int i = 0; i < n; i++) {
		cout << mang[i] << " ";
	}
	return 0;
}
