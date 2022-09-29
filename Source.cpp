#include <iostream>
#include <math.h>

using namespace std;

int main() {
	// float pi = 3.14;
	int a = 2;
	float b = 19.03;
	double y = (0.75 * sqrt(b) - (1 / 2) * pow(a, 1.0 / 3)) * sin(b * 3.14 / 3);
	cout << "Value function number 1 in point a and b : " << y << endl;
	double y2 = (8.15 * pow(b, 1.0 / 3) * log(a)) / (38 * cos(b) * (pow(exp(1), a) - pow(a, a)));
	cout << "Value function number 2 in point a and b : " << y2 << endl;
	double y3 = (0.314 * exp(a) - 0.512 * exp(b)) / (sin(b / 3 * 3.14)) * log(a);
	cout << "Value function number 3 in point a and b : " << y3 << endl;
	double y4 = pow((0.1 * log(exp(3))) / (pow(sin(a / b * M_PI), 2) + pow(cos(a / b * M_PI), 2)), (1 / 3));
	cout << "Value function number 4 in point a and b : " << y4 << endl;
	double y14 = (4.3 * sin((a / b + 1) * M_PI)) / ((a / b) * 1 - cos(a / b - 1) * M_PI) + log(b);
	cout << "Value function number 14 in point a and b : " << y14 << endl;
	return 0;
}