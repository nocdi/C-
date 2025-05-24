#include <iostream>
using namespace std;
int main() {
	int arr[20];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang 1 chieu: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// Sap xep mang theo thu tu tang dan
    for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) { // muốn thay đổi từ tăng dần thành giảm dần thì thay dấu > thành <.
				// Hoan doi hai phan tu
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "Mang da sap xep: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
// muốn giảm dần thì thay đổi giấu > thành < trong phần if.
