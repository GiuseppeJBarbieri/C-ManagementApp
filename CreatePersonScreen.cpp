#include "CreatePersonScreen.h"
#include "PersonController.h"

#include <iostream>
#include <string>

using namespace std;

void CreatePersonScreen::createPersonInstructions()
{
	string firstName;
	cout << "Please enter the first name... ";
	cin >> firstName;
	PersonController * pc = new PersonController();
	pc->createPerson(firstName);
	system("Pause");
}