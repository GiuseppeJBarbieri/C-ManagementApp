#include "HomeScreen.h"
#include "CreatePersonScreen.h"
#include "Utilities.h"
#include "View_Cars_Main.h"
#include "Edit_Cars_Main.h"
#include "Sales_Invoice_Main.h"
#include "Customer_Information_Main.h"
#include "Review_Page.h"
#include <windows.h>

#include <string>
#include <iostream>

using namespace std;

//This will be the homescreen.
//Here we will recieve a command from the user and determine what their trying to do.
void HomeScreen::start()
{
	system("CLS");	

	while (true)
	{
		displayName();
		//CreatePersonScreen * createPerson = new CreatePersonScreen();
		View_Cars_Main * viewCarsScreen = new View_Cars_Main();
		Edit_Cars_Main * editCarsScreen = new Edit_Cars_Main();
		Sales_Invoice_Main * salesInvoiceScreen = new Sales_Invoice_Main();
		Customer_Information_Main * customerInfoScreen = new Customer_Information_Main();
		Review_Page * reviewPage = new Review_Page();

		gotoxy(50, 10);
		cout << "Hello and welcome to the project" << endl;
		gotoxy(50, 11);
		cout << "1. View Car Lot                         \n";
		gotoxy(50, 12);
		cout << "2. Edit Vehicles                           \n";
		gotoxy(50, 13);
		cout << "3. Sales Invoices                          \n";
		gotoxy(50, 14);
		cout << "4. Customer/Employee Information                  \n";
		gotoxy(50, 15);
		cout << "5. Review Page\n";
		gotoxy(50, 16);
		cout << "6. Exit Application                               \n";
		gotoxy(50, 17);
		int input;
		input = 0;
		cin >> input;	

		switch (input)
		{
			//in this case when the user enters v it will create a reference for the CreatePersonScreen.cpp file located in the view folder.
			//It then starts the createPerosnInstructions.
		case 1:
			viewCarsScreen->viewCarsMenu();
			gotoxy(50, 18);
			cout << "                                  ";
			break;
		case 2:
			editCarsScreen->editCarsMenu();
			gotoxy(50, 18);
			cout << "                                  ";
			break;
		case 3:			
			salesInvoiceScreen->salesInvoiceMenu();
			gotoxy(50, 18);
			cout << "                                  ";
			break;
		case 4:
			customerInfoScreen->customerInfoMenu();
			gotoxy(50, 18);
			cout << "                                  ";
			break;
		case 5:
			reviewPage->showReviewPage();
			gotoxy(50, 18);
			cout << "                                  ";
			break;
		case 6:
			exit(0);
			break;
		}
		
		
	}
	system("Pause");
}

void HomeScreen::displayName()
{
	system("mode 200");
	//system("Color 12A");
	system("cls");
	system("color 5");

	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 24;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	
	string art = "";
	art += " _____ _                                  ______            _     _           _ \n";
	art += "|  __ (_)                                 | ___ \          | |   (_)         (_)\n";
	art += "| |  \/_ _   _ ___  ___ _ __  _ __   ___  | |_/ / __ _ _ __| |__  _  ___ _ __ _ \n";
	art += "| | __| | | | / __|/ _ \ '_ \| '_ \ / _ \ | ___ \/ _` | '__| '_ \| |/ _ \ '__| |\n";
	art += "| |_\\\ | |_| \__ \  __/ |_) | |_) |  __/ | |_/ / (_| | |  | |_) | |  __/ |  | |\n";
	art += " \____/_|\__,_|___/\___| .__/| .__/ \___| \____/ \__,_|_|  |_.__/|_|\___|_|  |_|\n";
	art += "                       | |   | |                                                \n";
	art += "                       |_|   |_|                                                \n";
	art += "																				\n";

	cout << art;
	cin.get();

}

