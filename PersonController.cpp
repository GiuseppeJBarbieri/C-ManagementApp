/*
 * PersonController.cpp
 * ManagementApp
 * 
 *
 * Created by Giuseppe Barbieri on 2/24/18
 *
 */

//#include it is a preproccessor notification 
//this is not read by the compiler in c++
//rather it is read by the preproccessor
//which gets everything ready for c++
//"Go and find this location"
#include "PersonController.h"
#include <iostream>

//The namespace like java import, importing specifically package information (like java.import arraylist)
using namespace std;

/*
//:: scope resolution operator
void PersonController :: start()
{
	// << show where the information goes to (direct the information)
	// goes from endl to "" to cout which is the console output
	cout << "This is for console output" << endl;
}
*/

//Here the function takes the firstName entered by the user and creates a new perosn object
//The person object is then submitted to the console.

void PersonController::createPerson(string firstName)
{
	/*
	cout << "\nIn PersonController class...\nCreatePerson function...\nObtained the first name:\t"
		<< firstName << endl;
		*/
	PersonObjH p1(firstName);
	p1.showPerson();
	p1.storePerson(firstName);

}

PersonObjH PersonController::getPerson()
{
	return PersonObjH();
}
