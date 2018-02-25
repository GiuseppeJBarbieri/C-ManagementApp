#pragma once
#include <string>

class PersonObjH
{
private:
	std::string firstName;
	int id;

public:
	PersonObjH();
	PersonObjH(std::string firstName);
	int getId();
	std::string getFirstName();
	void setFirstName(std::string firstName);
	void showPerson();
};
