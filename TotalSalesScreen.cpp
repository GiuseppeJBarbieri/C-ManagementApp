#include "TotalSalesScreen.h"
#include "SalesInvoiceController.h"
#include "Sales_Invoice_Main.h"
#include "Utilities.h"
#include <string>
#include <iostream>
#include <iomanip>  

using namespace std;

void TotalSalesScreen::showTotalSales()
{
	int i = 9;
	system("CLS");
	gotoxy(50, i++);
	cout << "|===============================================|";
	gotoxy(50, i++);
	cout << "|                  Total Sales                  |";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i);
	cout << "|  Your total sales are :                       |";
	gotoxy(76, i++);
	cout << fixed << setprecision(2) << SalesInvoiceController::viewTotalSales();
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
