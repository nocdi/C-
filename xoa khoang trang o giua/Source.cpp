#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "Nhap s: ";
	getline(cin, s);
	int i = 0;
	while (i < s.length()) {
		if(s[i]==' ' && s[i+1]==' '){ //tra nếu ký tự hiện tại là khoảng trắng và ký tự tiếp theo cũng là khoảng trắng
			s.erase(i, 1); // xóa ký tự khoảng trắng hiện tại
		}
		else {
			i++; // nếu không phải khoảng trắng thì tăng i lên 1
		}
	}
	cout << "Chuoi sau khi xoa khoang trang: " << s << endl;
	return 0;
}
