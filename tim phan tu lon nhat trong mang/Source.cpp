#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap so phan tu n: ";
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu arr[" << i << "]: ";
		cin >> arr[i];
	}
	//xuat ra so lon nhat trong mang
	int lonnhat = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > lonnhat) {
			lonnhat = arr[i];
		}
	}
	cout << "So lon nhat trong mang la: " << lonnhat << endl;
	return 0;
}
