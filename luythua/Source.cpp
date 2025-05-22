#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int S = 1;
	for (int i = 1; i <= b; i++) {
		S *= a;//S= S * a;
	}
	cout << a << "^" << b << " = " << S << endl;
	return 0;
}
