#include "Sales_Invoice_Main.h"
#include "TotalSalesScreen.h"
#include "TotalExpensesScreen.h"
#include "GrossProfitScreen.h"
#include "Utilities.h"
#include <string>
#include <iostream>

using namespace std;

void Sales_Invoice_Main::salesInvoiceMenu()
{
	system("color 0a");
	int i = 9;
	system("CLS");
	gotoxy(50, i++);
	cout << "|===============================================|";
	gotoxy(50, i++);
	cout << "|          What would you like to do?           |";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|            [1]. Total Sales                   |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|            [2]. Total Expenses                |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|            [3]. Gross Profit                  |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|            [4]. Exit                          |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "| Enter choice here:                            |";
	gotoxy(50, i);
	cout << "|===============================================|";
	gotoxy(71, --i);

	int selection;
	cin >> selection;

	switch (selection)
	{
	case 1:		
		TotalSalesScreen::showTotalSales();
		break;
	case 2:
		TotalExpendesScreen::showTotalExpenses();
		break;
	case 3:
		GrossProfitScreen::showGrossProfit();
		break;
	case 4:
		break;
	}
	gotoxy(52, i);
}
