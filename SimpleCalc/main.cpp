#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Введите два числа :" << endl;
	cin >> a >> b;
	cout << endl << "Результаты математических и логических операций:" << endl;
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << 1.0 * a / b << endl;
	cout << a << " & " << b << " = " << (a & b) << endl;
	cout << a << " | " << b << " = " << (a | b) << endl;
	cout << a << " ^ " << b << " = " << (a ^ b) << endl;

	return 0;
}