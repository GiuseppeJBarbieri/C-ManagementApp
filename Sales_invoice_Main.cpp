#include "Sales_Invoice_Main.h"
#include "Utilities.h"
#include <string>
#include <iostream>

using namespace std;

void Sales_Invoice_Main::salesInvoiceMenu()
{
	system("CLS");
	gotoxy(50, 9);
	cout << "\tSALES INVOICE MENU\n";
	gotoxy(50, 10);
	cout << "--------------------------";
	gotoxy(50, 11);
	cout << "1. Today's Sales\n";
	gotoxy(50, 12);
	cout << "2. Month Sales\n";
	gotoxy(50, 13);
	cout << "3. Yearly Sales\n";
	gotoxy(50, 14);
	system("pause");
}
