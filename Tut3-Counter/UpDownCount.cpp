/*
UpDownCount Definition
*/

#include "UpDownCount.h"

// constructor
UpDownCount::UpDownCount()
{
	Start = 0;
	Stop = 255;
	Up = 1;
	Down = 1;
}

// count up and down
void UpDownCount::count()
{
	cout << endl << endl << " Counting up"; Sleep(500);

	for (int i = Start; i <= Stop; i += Up)
	{
		cout << endl << "  " << i; Sleep(70);
	} Sleep(500);

	system("cls");

	cout << endl << endl << " Counting down"; Sleep(500);

	for (int i = Stop; i >= Start; i -= Down)
	{
		cout << endl << "  " << i; Sleep(70);
	}
	cout << endl << endl;
}

void UpDownCount::count(int strt, int stp, int incrm, int dcrm)
{
	Start = strt;
	Stop = stp;
	Up = incrm;
	Down = dcrm;
	count();
}
