#include <iostream>
using namespace std;
int main() {
	int chieudai, chieurong;
	cout << "Nhap vao chieu rong cua hinh chu nhat : ";
	cin >> chieurong;
	cout << "Nhap vao chieu dai cua hinh chu nhat : ";
	cin >> chieudai;
	for (int i = 1; i <= chieurong; i++) {
		for (int j = 1; j <= chieudai; j++) {
			if (i == 1 || i == chieurong || j == 1 || j == chieudai) {
				cout << "*" << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}
