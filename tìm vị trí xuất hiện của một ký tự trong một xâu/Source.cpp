#include <iostream>//cách này thì không xuất ra giá trị rác
using namespace std;
int main() {
	string s;
	char c;
	cout << "Nhap s: ";
	cin >> s;
	cout << "\nNhap c: ";
	cin >> c;
	int index = -1; // Khởi tạo index là -1 để kiểm tra nếu không tìm thấy
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == c) {// Kiểm tra nếu ký tự tại vị trí i bằng c
			index = i; // Cập nhật index nếu tìm thấy ký tự c
			
			break; 
			/*
			Gọi lệnh break để dừng vòng lặp do
			đã tìm thấy vị trí đầu tiên mà ký tự c xuất hiện.
			Nếu không có lệnh break thì kết quả của chương trình
			sẽ là vị trí cuối cùng mà ký tự c xuất hiện.
			*/
		}
	}
	cout <<"Vi tri dau tien cua '" << c << "' trong xau '" << s << "' la: " << index << endl;
	return 0;
}


#include <iostream>//cách hai là dùng hàm find của string 
#include <string>
using namespace std;
int main() {
	string s;
	char c;
	cout << "nhap s: ";
	getline(cin, s);

	cout << "\nNhap c: ";
	cin >> c;

	cout << s.find(c);

	return 0;
}
