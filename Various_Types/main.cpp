#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int gryvna, kopeyka; 
	int rez_v_grn, rez_v_kop;


	cout << "Enter the amount in hryvnias: ";
	cin >> gryvna;

	cout << "Enter the amount in pennies: ";
	cin >> kopeyka;

	rez_v_grn = (kopeyka / 100) + gryvna;

	rez_v_kop = kopeyka % 100;

	cout << "\nYou have in your balance: " << rez_v_grn << "uah." << rez_v_kop << "cop." << endl;

	_getch();
	return 0;
}