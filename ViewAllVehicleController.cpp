#include "ViewAllVehicleController.h"
#include "CarModel.h"
#include <fstream>
#include<iostream>
#include <vector>
#include <ObjectArray.h>

using namespace std;

vector<CarModel> ViewAllVehicleController::getCarDB()
{
	ifstream fin;
	fin.open("CarModel.txt");
	if (!fin) {
		cerr << "Error in opening the file" << endl;
	}
	vector<CarModel> car;
	CarModel temp;
	while (fin >> temp.id >> temp.make >> temp.model >> temp.year) {
		car.push_back(temp);
	}

	return car;
}
