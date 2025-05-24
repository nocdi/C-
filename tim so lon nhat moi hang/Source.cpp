#include <iostream>
using namespace std;
int main() {
	int arr[100][100];
	int n, m;
	cout << "Nhap so dong n: ";
	cin >> n;
	cout << "Nhap so cot m: ";
	cin >> m;
	cout << "Nhap mang 2 chieu co " << n << " dong va " << m << " cot: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	cout << "\nSo lon nhat o moi hang la: ";
	for (int i = 0; i < n; i++) {
		int max = arr[i][0];
		for (int j = 0; j < m; j++) {
			if (arr[i][j + 1] > max) {
				max = arr[i][j + 1];
			}
		}
		cout << max << " ";
	}
	return 0;
}

