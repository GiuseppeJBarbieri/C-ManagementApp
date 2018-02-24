#include "PersonObjH.h"
#include <iostream>

static int _id = 0;
PersonObjH::PersonObjH() : id(_id++) { }

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