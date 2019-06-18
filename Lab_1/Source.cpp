#include<iostream>

using namespace std;

//check leap year
void namNhuan(int n) {
	if (n % 400 == 0) {
		cout << n << " is leap year";
	}
	else if ((n % 4 == 0) && (n % 100 != 0)) {
		cout << n << " is leap year";
	}
	else
	{
		cout << n << " is not leap year";
	}
}

//calculate factorial
void facN(int n) {
	int kq = 1;
	if (n < 0) {
		cout << "error value number";
	}
	else
	{
		for (int i = 1; i <= n; i++) {
			kq *= i;
		}
		cout << "Factorial of " << n << " is " << kq;
	}
}

//find UCLN, BCNN
int ucln(int a, int b) {
	if ((a < 0) || (b < 0)) {
		cout << "error value number";
	}
	else
	{
		while (a!=b) {
			if (a > b) {
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}
	}
	return a;
}

void main() {
	int choose, year, n, a, b;
	cout << "enter a option (1: check leap year, 2: factorial of number, 3: UCLN_BCNN): ";
	cin >> choose;
	switch (choose)
	{
	case 1:
		cout << "enter a year: ";
		cin >> year;
		namNhuan(year);
		break;

	case 2:
		cout << "enter a number: ";
		cin >> n;
		facN(n);
		break;

	case 3:
		cout << "enter 2 number" << endl;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "UCLN and BCNN is " << ucln(a,b) << " & " << a*b/ucln(a,b) << endl;
	}
}