/*
* Review_Page.cpp
* ManagementApp
*
*
* Created by Andre Bernstein on 4/18/18
*
*/


#include "Review_Page.h"
#include "Utilities.h"

#include <string>
#include <iostream>

using namespace std;

void Review_Page::showReviewPage()
{
	system("CLS");
	gotoxy(50, 9);
	cout << "REVIEW PAGE\n";
	gotoxy(50, 10);
	cout << "---------------------------\n";
	gotoxy(50, 11);
	cout << "1. Review\n";
	gotoxy(50, 12);
	cout << "2. Show Reviews\n";
	gotoxy(50, 13);

	system("pause");
}
