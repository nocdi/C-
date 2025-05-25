#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout <<"Nhap s : ";
	getline(cin, s);

	int dem = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			dem++;
		}
	}
	cout << "co tong cong " << dem << " chu in hoa. ";
	return 0;
}
