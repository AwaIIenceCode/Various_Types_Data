#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int user_time, left_time;
	const int work_time = 28800; //seconds in 8 hour  

	cout << "Enter the number of seconds that have elapsed since the beginning of the workday -> ";
	cin >> user_time;

	left_time = (work_time - user_time) / 3600; //difference between total seconds and elapsed seconds / 3600 (sec in hour)

	cout << "You have until the end of the day " << left_time << " hours" << endl;

	_getch();
	return 0;
}