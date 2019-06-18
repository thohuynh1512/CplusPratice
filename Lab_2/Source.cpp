#include<iostream>
#include<climits>//lay kich thuoc kieu du lieu
#include<iomanip>//lam tron n chu so thap phan
#include<math.h>

using namespace std;

//define macro 
#define avg(T,L,H) ((T+L+H)/3)

//xuất ra màn hình khoảng giá trị của các kiểu dữ liệu :
void Bai1() {
	cout << "Typical Range of Char = " << CHAR_MIN << " to " << CHAR_MAX << endl;
	cout << "Typical Range of Short Interger = " << SHRT_MIN << " to " << SHRT_MAX << endl;
	cout << "Typical Range of Unsigned Short Interger = 0 to " << USHRT_MAX << endl;
	cout << "Typical Range of Interger = " << INT_MIN << " to " << INT_MAX << endl;
	cout << "Typical Range of Signed Long Interger = " << LONG_MIN << " to " << LONG_MAX << endl;
	cout << "Typical Range of Unsigned Long Interger = 0 to " << ULONG_MAX << endl;
}

//trình chuyển đổi giữa đô ̣C và đô ̣F: °F = °C ∗9 / 5 + 32.
void Bai2() {
	float doC, doF, value;
	int n; //option number
	cout << "Chuyen doi giua do C va do F (chon 1 - chuyen C qua F, chon 2 - chuyen F qua C): ";
	cin >> n;
	switch (n)
	{
		//chon 1: chuyen C qua F
		case 1:
			cout << "Nhap do C = ";
			cin >> doC;
			value = doC * 9 / 5 + 32;
			break;
		//chon 2: chuyen F qua C
		case 2:
			cout << "Nhap do F = ";
			cin >> doF;
			value = (doF - 32) * 5 / 9;
	}
	cout << "Gia tri cuoi cung sau khi chuyen la " << setprecision(2) << fixed << value;
}

//in so luong sinh vien 3 mien
void Bai3() {
	int nSVB = 50, nST = 60, nSVN = 70;
	cout << setw(10) << right << "Bac" << setw(10) << right << "Trung" << setw(10) << right << "Nam" << endl;
	cout << setw(10) << right << nSVB << setw(10) << right << nST << setw(10) << right << nSVN << endl;
}

//tính điểm trung bình của sinh viên.
void Bai4() {
	float T, L, H;
	cout << "Nhap diem Toan, Ly, Hoa lan luot la ";
	cin >> T >> L >> H;
	cout << "Diem trung binh bang = " << avg(T, L, H) << endl;
}

//function returning magnitude of vector
float mag(float x, float y) {
	return sqrt(x * x + y * y);
}

//function returning direction of vector
float direct(float x1, float y1, float x2, float y2) {
	float x = mag(x1, x2);
	float y = mag(y1, y2);
	return acos((x1 * y1 + x2 * y2) / (x * y));
}

//tim do lon va goc cua vecto
void Bai5() {
	float x1, x2, y1, y2;
	cout << "VECTOR X:" << endl;
	cout << "Nhap toa do x:";
	cin >> x1;
	cout << "Nhap toa do y:";
	cin >> y1;
	cout << "VECTOR Y:" << endl;
	cout << "Nhap toa do x:";
	cin >> x2;
	cout << "Nhap toa do y:";
	cin >> y2;

	cout << setw(10) << left << "x" << setw(1) << "=" << right << "[" << setprecision(2) << fixed << x1 << " , " << setprecision(2) << fixed << y1 << "]" << endl;
	cout << setw(10) << left << "||x||" << setw(1) << "=" << setw(13) << right << setprecision(2) << fixed << mag(x1, y1) << endl;
	cout << setw(10) << left << "y" << setw(1) << "=" << right << "[" << setprecision(2) << fixed << x2 << " , " << setprecision(2) << fixed << y2 << "]" << endl;
	cout << setw(10) << left << "||x||" << setw(1) << "=" << setw(13) << right << setprecision(2) << fixed << mag(x2, y2) << endl;
	cout << setw(10) << left << "<x,y>" << setw(1) << "=" << setw(13) << right << setprecision(2) << fixed << direct(x1, x2, y1, y2) << endl;

}

void main() {
	int choose, doC;
	cout << "Type a number: ";
	cin >> choose;
	switch (choose)
	{
	case 1:
		Bai1();
		break;
	case 2:
		Bai2();
		break;
	case 3:
		Bai3();
		break;
	case 4:
		Bai4();
		break;
	case 5:
		Bai5();
		break;
	}
}