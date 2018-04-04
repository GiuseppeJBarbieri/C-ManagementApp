#include "HomeScreen.h"
#include "CreatePersonScreen.h"

#include <iostream>

using namespace std;

//This will be the homescreen.
//Here we will recieve a command from the user and determine what their trying to do.
void HomeScreen::start()
{
	string firstName;
	cout << "Hello and welcome to the project" << endl;

	while (true)
	{
		CreatePersonScreen * createPerson = new CreatePersonScreen();
		cout << "1. Add to the database\n";
		cout << "2. Load the database\n";
		int input;
		cin >> input;

		switch (input)
		{
			//in this case when the user enters v it will create a reference for the CreatePersonScreen.cpp file located in the view folder.
			//It then starts the createPerosnInstructions.
		case 1:
			createPerson->createPersonInstructions();
			break;
		case 2:
			createPerson->loadPersonFromFile();
			break;
		
		}
		
	}
	system("Pause");
}
