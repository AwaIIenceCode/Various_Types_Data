#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
	double V, radius;
	const double PI = 3.14;

	cout << "Enter the radius of the sphere -> ";
	cin >> radius;

	V = (4.0 / 3.0) * PI * pow(radius, 3);

	cout << fixed << setprecision(1);
	cout << "\nCalculations were performed according to the formula: V = 4/3 pi*R^3" << endl;
	cout << "The volume of the sphere is: " << V << " cubic units." << endl;

	_getch();
	return 0;
}