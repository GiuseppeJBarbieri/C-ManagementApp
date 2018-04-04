#include "PersonObjH.h"
#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>

using namespace std;


static int _id = 0;

PersonObjH::PersonObjH() : id(_id) { }

PersonObjH::PersonObjH(std::string firstName) : id(_id++), firstName(firstName) {  }

int PersonObjH::getId()
{
	return id;
}

std::string PersonObjH::getFirstName()
{
	return firstName;
}

void PersonObjH::setFirstName(std::string first_Name)
{
	firstName = first_Name;
}
void PersonObjH::showPerson()
{
	std::cout << "ID: " << getId() << " | The first name is: " << getFirstName() << std::endl;
}
//I need to load the file and get the last id used and saved it to the new person
void PersonObjH::storePerson(string firstName)
{
	fstream fileOut;
	fileOut.open("DataBase.txt", fstream::app);

	if (fileOut.is_open())
	{
		fileOut << getId() << ":" << firstName << "\n";
		cout << "Saved\n";

	}
	fileOut.close();
}

void PersonObjH::loadDB()
{
	fstream outFile;
	outFile.open("DataBase.txt", fstream::in);
	string line;

	if (outFile.is_open())
	{
		while (getline(outFile, line))
		{
			cout << line << "\n";
		}
	}
}

