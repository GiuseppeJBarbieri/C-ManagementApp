/*
* Review_Page.cpp
* ManagementApp
*
*
* Created by Andre Bernstein
*
*/

#include "Review_Page.h"
#include "Review_Page_Controller.h"
#include "Utilities.h"
#include <iostream>

using namespace std;

void Review_Page::showReviewPage()
{	
	system("color 05");
	int i = 9;
	system("CLS");
	gotoxy(50, i++);
	cout << "|===============================================|";
	gotoxy(50, i++);
	cout << "|                Review Page                    |";
	gotoxy(50, i++);
	cout << "|-----------------------------------------------|";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|            [1]. Leave Review                  |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|            [2]. Show Reviews                  |";
	gotoxy(50, i++);
	cout << "|                                               |";
	gotoxy(50, i++);
	cout << "|            [3]. Clear Reviews                 |";
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

	int option;
	cin >> option;
	switch (option)
	{
	case 1:
		Review_Page_Controller::addReview();
		break;
	case 2:
		Review_Page_Controller::showReviews();
		break;
	case 3:
		Review_Page_Controller::clearReviews();
		break;
	case 4:
		break;
	}
}