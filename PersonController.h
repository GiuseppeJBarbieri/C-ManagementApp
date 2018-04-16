#ifndef PersonController_h
#define PersonController_h

#include "PersonObjH.h"

class BuyVehicleController
{
	//Start method inside the class definition file(header)
	//Where we define the class.
public:
	/*
	 * method prototype like a method header in java inside the interface
	 * it defines for the class that there is a method called start thats part of the class personcontroller
	 * and gets the information ready to go
	*/
	//void start();
	void createPerson(std::string firstName);
	PersonObjH getPerson();
};

#endif /* PersonController_h */

