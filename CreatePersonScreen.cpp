#include "CreatePersonScreen.h"
#include "PersonController.h"

#include <iostream>
#include <string>

using namespace std;

/*
	Here the console tells the user to enter a name which then is captured by a string variable named firstName.
	It is then sent to the PersonController.cpp located in the controller folder.
*/

void CreatePersonScreen::createPersonInstructions()
{
	string firstName;
	cout << "Please enter the first name... ";
	cin >> firstName;
	PersonController * pc = new PersonController();
	pc->createPerson(firstName);
	system("Pause");
}

void CreatePersonScreen::loadPersonFromFile()
{
	PersonController * pc = new PersonController();
	pc->getPerson();
}

