#include "CustomerSearchResultsScreen.h"
#include "Customer_Information_Main.h"
#include "SearchCustomerInfoScreen.h"
#include "Utilities.h"
#include <iostream>
void CustomerSearchResults::showCustomerResultScreen(vector<CustomerInfoModel> resultsList)
{
	system("CLS");
	gotoxy(50, 8);
	cout << "|===================================================================|\n";
	gotoxy(50, 9);
	cout << "|                          Customer Database                        |\n";
	gotoxy(50, 10);
	cout << "|===================================================================|\n";
	gotoxy(50, 11);
	cout << "|   ID     FirstName     LastName     CarIdSold     CarIdPurchased  |\n";
	gotoxy(50, 12);
	cout << "|-------------------------------------------------------------------|\n";
	int i = 13;
	for (const auto& customer : resultsList) {
		gotoxy(50, i);
		cout << "|   " << customer.customerId;
		gotoxy(61, i);
		cout << customer.firstname;
		gotoxy(75, i);
		cout << customer.lastname;
		gotoxy(88, i);
		cout << customer.carIdSold;
		gotoxy(102, i++);
		cout << customer.carIdPurchased << "               |\n";
	}
	gotoxy(50, i++);
	cout << "|                                                                   |\n";
	gotoxy(50, i++);
	cout << "|-------------------------------------------------------------------|\n";
	gotoxy(50, ++i);
	cout << "|===================================================================|\n";
	gotoxy(50, --i);
	cout << "|  Would you like to search again?(Y/N):                            |\n";
	string choice;
	gotoxy(91, i);
	cin >> choice;
	if (choice.compare("y") == 0 || choice.compare("Y") == 0)
	{
		SearchCustomerInfoScreen::showSearchMenu();
	}
	else
	{
		Customer_Information_Main::customerInfoMenu();
	}
}
