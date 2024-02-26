#include <iostream>
using namespace std;


int tinhtong(int so1, int so2) {
	// int sotong = so1 + so2;
	// return sotong;

	return so1 + so2;

}
int tinhhieu(int so1, int so2) {
	// int sotong = so1 + so2;
	// return sotong;

	return so1 - so2;
}
int tinhtich(int so1,int so2) {
	return so1 * so2;
}
int tinhthuong(int so1, int so2) {
	return so1 / so2;
}
int main() {
	//Khai báo biến
	int so1, so2, tong;

	// nhập dữ liệu vào biến
	cout << "CHUONG TRINH TINH TONG 2 SO\n";
	cout << "Nhap so thu nhat:";
	cin >> so1;
	cout << "Nhap so thu hai:";
	cin >> so2;

	//tính toán
	tong = tinhtong(so1, so2);

	//xuất dữ liệu
	cout << so1 << "+" << so2 << "=" << tong << endl;
	tong = tinhhieu(so1, so2);
	cout << so1 << "-" << so2 << "=" << tong << endl;
	tong = tinhtich(so1, so2);
	cout << so1 << "*" << so2 << "=" << tong << endl;
	tong = tinhthuong(so1, so2);
	cout << so1 << "/" << so2 << "=" << tong << endl;
}


