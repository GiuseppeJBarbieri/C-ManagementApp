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
		cout << "Please enter V to view the database...\t" << endl;
		char input;
		cin >> input;

		switch (input)
		{
			//in this case when the user enters v it will create a reference for the CreatePersonScreen.cpp file located in the view folder.
			//It then starts the createPerosnInstructions.
		case 'v':
		case 'V':
			CreatePersonScreen * createPerson = new CreatePersonScreen();
			createPerson->createPersonInstructions();
			break;
		
		}
		
	}
	system("Pause");
}
