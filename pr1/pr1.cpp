#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a;
	float b;
	float c;
	cout << "Введите a и b: ";
	cin >> a >> b;
	c = pow(a, b);
	float d;
	d = c // a;
	cout << "Результаты вычислений /n" << "c = / n" << c << "d = " << d;
}