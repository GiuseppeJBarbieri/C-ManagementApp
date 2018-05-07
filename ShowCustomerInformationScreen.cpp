#include "ShowCustomerInformationScreen.h"
#include "ViewCustomerInformationController.h"
#include "Customer_Information_Main.h"
#include "Utilities.h"

#include <string>
#include <iostream>

using namespace std;

void ShowCustomerInformationScreen::showAllCustomers()
{
	system("CLS");
	vector<CustomerInfoModel> customerDB = ViewCustomerInformationController::getAllCustomers();
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
	for (const auto& cust : customerDB) {
		gotoxy(50, i);
		cout << "|   " << cust.customerId;
		gotoxy(61, i);
		cout << cust.firstname;
		gotoxy(75, i);
		cout << cust.lastname;
		gotoxy(88, i);
		cout << cust.carIdSold;
		gotoxy(102, i++);		
		cout << cust.carIdPurchased << "               |\n";
	}
	gotoxy(50, i++);
	cout << "|-------------------------------------------------------------------|\n";
	gotoxy(50, ++i);
	cout << "|===================================================================|\n";
	gotoxy(50, --i);
	cout << "|                                                                   |\n";
	gotoxy(53, i);
	system("pause");
	Customer_Information_Main::customerInfoMenu();
}
