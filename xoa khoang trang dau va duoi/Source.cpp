#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << " Nhap s: ";
	getline(cin, s);
	while (s[0] == ' ') { // Xóa khoảng trắng ở đầu chuỗi
		s.erase(0, 1); // Xóa ký tự đầu tiên nếu là khoảng trắng
	}

	while (s[s.length() - 1] == ' ') {// Xóa khoảng trắng ở cuối 
		s.erase(s.length() - 1, 1); // Xóa ký tự cuối cùng nếu là khoảng trắng
	}
	cout << "Chuoi sau khi xoa khoang trang: " << s << endl;
	return 0;
}
