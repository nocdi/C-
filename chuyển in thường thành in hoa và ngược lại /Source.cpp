#include <iostream>// Chuyển đổi chữ thường thành chữ hoa trong chuỗi
#include <string>
using namespace std;
int main(){
  string s;
  cout<<"Nhap s: ";
  getline(cin, s);

  for(int i = 0; i < s.size(); i++) {
    if(s[i] >= 'a' && s[i] <= 'z') {
      s[i] -= 32;// Chuyển ký tự thường thành chữ hoa  
    }
  }
  cout << "Chuoi sau khi chuyen sang chu hoa: " << s << endl;
  return 0;
}

#include <iostream> // Chuyển đổi chữ hoa thành chữ thường trong chuỗi
#include <string>
using namespace std;
int main() {
	string s;
	cout << "Nhap s: ";
	getline(cin, s);
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32; // Chuyển ký tự thường thành chữ hoa
		}
	}
	cout << "Chuoi sau khi chuyen sang chu hoa: " << s << endl;
	return 0;
}
