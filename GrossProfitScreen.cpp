#include "GrossProfitScreen.h"
#include "SalesInvoiceController.h"
#include "Sales_Invoice_Main.h"
#include "Utilities.h"
#include <string>
#include <iostream>
#include <iomanip>  

void GrossProfitScreen::showGrossProfit()
{
	int i = 9;
	system("CLS");
	gotoxy(50, i++);
	cout << "|===============================================|";
	gotoxy(50, i++);
	cout << "|                 Gross Profit                  |";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i);
	cout << "|  Your Gross Profit is :                       |";
	gotoxy(76, i++);
	cout << fixed << setprecision(2) << SalesInvoiceController::viewGrossProfit();
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
