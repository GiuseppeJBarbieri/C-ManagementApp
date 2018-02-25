//#include <iostream>
//#include "PersonObjH.h"

#include "PersonController.h"

int main()
{
	//The new operator only gets used when your creating a reference to a pointer
	// * Creating a pointer of PersonController type
	PersonController * app = new PersonController();
	//Calling start method
	//app selector start()
	//So when you are using a pointer
	//You cant simply just call the
	//. operator you have to either use the selector operator or
	//dereference and catch that option and then use the dot operator
	app->start();
	
}