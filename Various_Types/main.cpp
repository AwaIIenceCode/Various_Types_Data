#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	double S, length, width, height;

	cout << "Enter the length -> ";
	cin >> length;

	cout << "Enter the width -> ";
	cin >> width;

	cout << "Enter the height -> ";
	cin >> height;

	S = length * width * height;

	cout << fixed << setprecision(2);
	cout << "\nBy the formula \"S = a * b * h\" Parallelipid volume = " << S << " cub.cm";

	_getch();
	return 0;
}