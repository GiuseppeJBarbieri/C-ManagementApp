/*
* CarModel.cpp
* ManagementApp
*
*
* Created by Giuseppe Barbieri on 4/15/18
*
*/
#include <iostream>
#include <string>
#include "CarModel.h"

using namespace std;

CarModel::CarModel() { }

CarModel::CarModel(int id, string make, string model, string year) : id(id), make(make), model(model), year(year) { }

void CarModel::showCar()
{
	cout << "ID: " << id << " Make: " << make << " Model: " << model << " Year: " << year << endl;
	/*
	cout << id << endl;
	printf("%s\n", make);
	printf("%s\n", model);
	printf("%s\n", year);
	*/

}

//then create a function that saves each object to a text file but depending on what it is using a key.
//then a function to load a specific database