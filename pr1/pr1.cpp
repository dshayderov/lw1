#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, d;
	cout << "Введите a и b: ";
	cin >> a >> b;
	c = pow(a, b);
	d = c // a;
	cout << "Результаты вычислений /n" << "c = / n" << c << "d = " << d;
	return 0;
}