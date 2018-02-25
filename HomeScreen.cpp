#include "HomeScreen.h"
#include "CreatePersonScreen.h"

#include <iostream>

using namespace std;

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
		case 'v':
		case 'V':
			CreatePersonScreen * createPerson = new CreatePersonScreen();
			createPerson->createPersonInstructions();
			break;
		
		}
		
	}
	system("Pause");
}
