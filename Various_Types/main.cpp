#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	double size_km_v_sm, distance, result;

	cout << "Enter the scale of the picture -> ";
	cin >> size_km_v_sm;

	cout << "Enter the distance between points -> ";
	cin >> distance;

	result = size_km_v_sm * distance;

	cout << fixed << setprecision(2);
	cout << "\nThe distance between the settlements is " << result << "km." << endl;

	_getch();
	return 0;
}