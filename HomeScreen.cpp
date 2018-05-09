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

void HomeScreen::start()
{
	displayName();
	system("CLS");
	displayTitle();
	system("CLS");	
	View_Cars_Main * viewCarsScreen = new View_Cars_Main();
	Edit_Cars_Main * editCarsScreen = new Edit_Cars_Main();
	Sales_Invoice_Main * salesInvoiceScreen = new Sales_Invoice_Main();
	Customer_Information_Main * customerInfoScreen = new Customer_Information_Main();
	Review_Page * reviewPage = new Review_Page();

	while (true)
	{
		system("color 7d");
		system("CLS");
		int i = 9;
		gotoxy(50, i++);
		cout << "|====================================================|";
		gotoxy(50, i++); 
		cout << "|              Kings Car Lot Application             |";
		gotoxy(50, i++);
		cout << "|====================================================|";
		gotoxy(50, i++);
		cout << "|             What would you like to do?             |";
		gotoxy(50, i++);
		cout << "|----------------------------------------------------|";
		gotoxy(50, i++);
		cout << "|                                                    |";
		gotoxy(50, i++);
		cout << "|            [1]. View Car Lot                       |";
		gotoxy(50, i++);
		cout << "|                                                    |";
		gotoxy(50, i++);
		cout << "|            [2]. Edit Car Lot                       |";
		gotoxy(50, i++);
		cout << "|                                                    |";
		gotoxy(50, i++);
		cout << "|            [3]. View Customers                     |";
		gotoxy(50, i++);
		cout << "|                                                    |";
		gotoxy(50, i++);
		cout << "|            [4]. Sales Invoice                      |";
		gotoxy(50, i++);
		cout << "|                                                    |";
		gotoxy(50, i++);
		cout << "|            [5]. Review Page                        |";
		gotoxy(50, i++);
		cout << "|                                                    |";
		gotoxy(50, i++);
		cout << "|            [6]. Exit                               |";
		gotoxy(50, i++);
		cout << "|                                                    |";
		gotoxy(50, i++);
		cout << "|----------------------------------------------------|";
		gotoxy(50, i++);
		cout << "| Enter choice here:                                 |";
		gotoxy(50, i);
		cout << "|====================================================|";
		gotoxy(71, --i);

		int selection;
		cin >> selection;
		
		switch (selection)
		{
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
			customerInfoScreen->customerInfoMenu();
			gotoxy(50, 18);
			cout << "                                  ";
			break;
		case 4:
			salesInvoiceScreen->salesInvoiceMenu();
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
	system("cls");
	system("color 4F");

	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 24;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	string art = R"(
    _____ _                                  ______            _     _           _ 
   |  __ (_)                                 | ___ \          | |   (_)         (_)  
   | |  \/_ _   _ ___  ___ _ __  _ __   ___  | |_/ / __ _ _ __| |__  _  ___ _ __ _ 
   | | __| | | | / __|/ _ \ '_ \| '_ \ / _ \ | ___ \/ _` | '__| '_ \| |/ _ \ '__| |
   | |_\ \ | |_| \__ \  __/ |_) | |_) |  __/ | |_/ / (_| | |  | |_) | |  __/ |  | |
   \_____/_|\__,_|___/\___| .__/| .__/ \___| \____/\___,_|_|  |_.__/|_|\___|_|  |_|
  ========================| |===| |=================================================                                               
                          |_|   |_|                                                
                    ___
                   ( _ )  
                   / _ \/\
                  | (_>  <
                   \___/\/                                                    
                 ==========																		

                                             ___            _           ______                     _       _       
                                            / _ \          | |          | ___ \                   | |     (_)      
                                           / /_\ \_ __   __| |_ __ ___  | |_/ / ___ _ __ _ __  ___| |_ ___ _ _ __  
                                           |  _  | '_ \ / _` | '__/ _ \ | ___ \/ _ \ '__| '_ \/ __| __/ _ \ | '_ \ 
                                           | | | | | | | (_| | | |  __/ | |_/ /  __/ |  | | | \__ \ ||  __/ | | | |
                                           \_| |_/_| |_|\__,_|_|  \___| \____/ \___|_|  |_| |_|___/\__\___|_|_| |_|
                                          ==========================================================================
)";

	cout << art;
	cin.get();
}

void HomeScreen::displayTitle()
{
	system("color 30");
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 24;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);


	string art = R"(
                                                                                                                                                          
     *****                                                                     * ***                                    ***** *                           
  ******                  *                                                  *  ****  *                              ******  *                       *    
 **   *  *    **         ***                                                *  *  ****                              **   *  *                       **    
*    *  *   **** *        *                                                *  **   **                              *    *  *                        **    
    *  *     ****                                             ****        *  ***                   ***  ****           *  *              ****     ********
   ** **    * **        ***     ***  ****        ****        * **** *    **   **           ****     **** **** *       ** **             * ***  * ******** 
   ** **   *             ***     **** **** *    *  ***  *   **  ****     **   **          * ***  *   **   ****        ** **            *   ****     **    
   ** *****               **      **   ****    *    ****   ****          **   **         *   ****    **               ** **           **    **      **    
   ** ** ***              **      **    **    **     **      ***         **   **        **    **     **               ** **           **    **      **    
   ** **   ***            **      **    **    **     **        ***       **   **        **    **     **               ** **           **    **      **    
   *  **    ***           **      **    **    **     **          ***      **  **        **    **     **               *  **           **    **      **    
      *       ***         **      **    **    **     **     ****  **       ** *      *  **    **     **                  *            **    **      **    
  ****         ***        **      **    **    **     **    * **** *         ***     *   **    **     ***             ****           *  ******       **    
 *  *****        ***  *   *** *   ***   ***    ********       ****           *******     ***** **     ***           *  *************    ****         **   
*    ***           ***     ***     ***   ***     *** ***                       ***        ***   **                 *     *********                        
*                                                     ***                                                          *                                      
 **                                             ****   ***                                                          **                                    
                                              *******  **                                                                                                 
                                             *     ****                                                                                                   

)";

	cout << art;
	cin.get();
}