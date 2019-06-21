#include<iostream>
#include<math.h>

using namespace std;

//define enum list of menu
typedef enum menuList {
	Nhap_hang_hoa = 1,
	Tim_hang_hoa,
	In_hang_hoa,
	Xoa_hang_hoa,
	Cap_nhat_hang_hoa,
	Luu_du_lieu,
	Tai_du_lieu,
	Thoat
};

//check R value is correct and define position of A to circle
void checkRadius(double R, double oX, double oY) {
	double aX, aY;
	double temp;
	if (R < 0) {
		cout << "Error: Please enter correct radius R";
	}
	else
	{
		cout << "enter coordinates of A[x,y] = ";
		cin >> aX >> aY;
		temp = sqrt((aX - oX) * (aX - oX) + (aY - oY) * (aY - oY));
		if (R > temp) {
			cout << "A is inside the circle";
		}
		else if (R < temp) {
			cout << "A is outside the circle";
		}
		else {
			cout << "A is on the circle";
		}
	}
}

//display the date after x day
void displayDate(int x) {
	int temp;
	temp = x % 7;
	switch (temp)
	{
	case 0:
		cout << "after " << x << " day, the date is Sunday";
		break;

	case 1:
		cout << "after " << x << " day, the date is Monday";
		break;

	case 2:
		cout << "after " << x << " day, the date is Tuesday";
		break;

	case 3:
		cout << "after " << x << " day, the date is Wednesday";
		break;

	case 4:
		cout << "after " << x << " day, the date is Thursday";
		break;

	case 5:
		cout << "after " << x << " day, the date is Friday";
		break;
	
	case 6:
		cout << "after " << x << " day, the date is Saturday";
		break;
	}
}

//solve the equation
void solveEquation(double a, double b, double c) {
	double delta;
	delta = b * b - 4 * a * c;
	double x1 = (-b + sqrt(delta)) / (2 * a);
	double x2 = (-b - sqrt(delta)) / (2 * a);
	if (delta < 0) {
		cout << "phuong trinh vo nghiem";
	}
	else if (delta > 0)
	{
		cout << "phuong trinh co 2 nghiem phan biet la: " << x1 << " va " << x2;
	}
	else
	{
		cout << "phuong trinh co 1 nghiem kep la: " << -b / (2 * a);
	}
}

//display menu & choose function
void displayMenu() {
	cout << "1. Nhap hang hoa" << endl;
	cout << "2. Tim hang hoa" << endl;
	cout << "3. In ra danh sach hang hoa" << endl;
	cout << "4. Xoa hang hoa" << endl;
	cout << "5. Cap nhat hang hoa" << endl;
	cout << "6. Luu du lieu" << endl;
	cout << "7. Tai du lieu" << endl;
	cout << "8. Thoat" << endl;
}

//function to choose a function and display that function
void printFunct() {
	int choose;
	cout << "Hay chon chuc nang: ";
	cin >> choose;
	switch (choose)
	{
	case Nhap_hang_hoa:
		cout << "Nhap hang hoa";
		break;
		
	case Tim_hang_hoa:
		cout << "Tim hang hoa";
		break;

	case In_hang_hoa:
		cout << "In ra danh sach hang hoa";
		break;

	case Xoa_hang_hoa:
		cout << "Xoa hang hoa";
		break;

	case Cap_nhat_hang_hoa:
		cout << "Cap nhat hang hoa";
		break;

	case Luu_du_lieu:
		cout << "Luu du lieu";
		break;

	case Tai_du_lieu:
		cout << "Tai du lieu";
		break;

	case Thoat:
		cout << "Thoat";
		break;

	default:
		cout << "Error";
	}		
}

//function to calculate equation
double calEquation() {
	double a, b, result;
	char c;
	cout << "Enter the equation: (a .... b): ";
	cin >> a;
	cin >> c;
	cin >> b;
	switch (c)
	{
	case '+':
		return a + b;
		break;

	case '-':
		return a - b;
		break;

	case '*':
		return a * b;
		break;

	case '/':
		return a / b;
		break;
	}
}

void main() {
	int choose;
	cout << "Enter a number (1 - Check position A(x,y) with the circle; 2 - after x day, the date is?; 3 - solveEquation; 4 - print function of menu";
	cin >> choose;

	switch (choose)
	{
	case 1:
		double oX, oY, R, aX, aY;
		cout << "enter coordinates of O[x,y] = ";
		cin >> oX >> oY;
		cout << "enter radius R = ";
		cin >> R;
		checkRadius(R,oX,oY);
		break;

	case 2:
		int x;
		cout << "enter x = ";
		cin >> x;
		displayDate(x);
		break;

	case 3:
		//enter 3 coefficients
		double a, b, c;
		cout << "enter 3 coefficients: a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "c = ";
		cin >> c;
		solveEquation(a, b, c);
		break;

	//print function of menu
	case 4:
		displayMenu();
		printFunct();		

	//calculate the equation
	case 5:
		cout << calEquation();
		break;
	}
}