#include "Customer_Information_Main.h"
#include "Utilities.h"
#include <string>
#include <iostream>

using namespace std;

void Customer_Information_Main::customerInfoMenu()
{
	system("CLS");
	gotoxy(50, 9);
	cout << "\tVIEW CUSTOMERS/EMPLOYEES\n";
	gotoxy(50, 10);
	cout << "--------------------------";
	gotoxy(50, 11);
	cout << "1. Search Customers\n";
	gotoxy(50, 12);
	cout << "2. Search Employees\n";
	gotoxy(50, 13);
	system("pause");
	gotoxy(50, 14);
	cout << "                                   \n";
}
