#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int user_seconds;
	int hour, minute, seconds;
	int left_hour, left_minute, left_seconds;
	int left_seconds_to_night;

	cout << "There are 86400 seconds in a day, don't forget!" << endl;
	cout << "Enter the number of seconds that have elapsed -> ";
	cin >> user_seconds;

	hour = user_seconds / 3600; //I'm counting how many hours have passed, because there are 3600 seconds in one hour.
	minute = (user_seconds - (hour * 3600)) / 60; //Here I calculate how many seconds are left after subtracting the hours and divide by 60, because that's the number of seconds in 1 minute.
	seconds = (user_seconds - ((hour * 3600) + (minute * 60))); //This is where I count how many seconds are left after subtracting hours and minutes. 

	cout << "\nIt's been overnight -> ";
	cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << seconds << endl;

	left_seconds_to_night = 86400 - (seconds + (minute * 60) + (hour * 3600)); //I have to calculate how many seconds we have left at night so there's no mistake.
	left_hour = left_seconds_to_night / 3600; //subtract the number of hours from the seconds
	left_minute = (left_seconds_to_night - (left_hour * 3600)) / 60; //I subtract the number of minutes from the remaining seconds.
	left_seconds = (left_seconds_to_night - ((left_hour * 3600) + (left_minute * 60))); //and the remainder -- are seconds

	cout << "By nightfall, there's still -> ";
	cout << setw(2) << left_hour << ":" << setw(2) << left_minute << ":" << setw(2) << left_seconds << endl;
		
	_getch();
	return 0;
}
