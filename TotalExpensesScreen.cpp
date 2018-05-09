#include "TotalExpensesScreen.h"
#include "SalesInvoiceController.h"
#include "Sales_Invoice_Main.h"
#include "Utilities.h"
#include <string>
#include <iostream>
#include <iomanip>  

using namespace std;

void TotalExpendesScreen::showTotalExpenses()
{
	int i = 9;
	system("CLS");
	gotoxy(50, i++);
	cout << "|===============================================|";
	gotoxy(50, i++);
	cout << "|                Total Expenses                 |";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i);
	cout << "|  Your total expenses are :                    |";
	gotoxy(78, i++);
	cout << fixed << setprecision(2) << SalesInvoiceController::viewTotalExpenses();
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i);
	cout << "|===============================================|";
	gotoxy(51, --i);
	system("pause");
	Sales_Invoice_Main::salesInvoiceMenu();
}
