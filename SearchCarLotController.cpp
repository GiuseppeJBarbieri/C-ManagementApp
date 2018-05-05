#include "SearchCarLotController.h"
#include "CarModel.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

using namespace std;

vector<CarModel> SearchCarLotController::searchByMake(string make)
{
	vector<CarModel> vehicleList;
	vector<CarModel> matchedList;
	getVehicleList(vehicleList);
	transform(make.begin(), make.end(), make.begin(), ::toupper);
	for (const auto& car : vehicleList) {
		string make2 = car.make;
		transform(make2.begin(), make2.end(), make2.begin(), ::toupper);
		if (make.compare(make2) == 0)
		{			
			matchedList.push_back(car);
		}		
	}
	return matchedList;
}

vector<CarModel> SearchCarLotController::searchByModel(string model)
{
	vector<CarModel> vehicleList;
	vector<CarModel> matchedList;
	getVehicleList(vehicleList);
	transform(model.begin(), model.end(), model.begin(), ::toupper);
	for (const auto& car : vehicleList) {
		string model2 = car.model;
		transform(model2.begin(), model2.end(), model2.begin(), ::toupper);
		if (model.compare(model2) == 0)
		{
			matchedList.push_back(car);
		}
	}
	return matchedList;
}

vector<CarModel> SearchCarLotController::searchByYear(string year)
{
	vector<CarModel> vehicleList;
	vector<CarModel> matchedList;
	getVehicleList(vehicleList);
	transform(year.begin(), year.end(), year.begin(), ::toupper);
	for (const auto& car : vehicleList) {
		string year2 = car.year;
		transform(year2.begin(), year2.end(), year2.begin(), ::toupper);
		if (year.compare(year2) == 0)
		{
			matchedList.push_back(car);
		}
	}	
	return matchedList;
}


ifstream SearchCarLotController::openFile()
{
	ifstream fin;
	fin.open("CarModel.txt");
	if (!fin) {
		cerr << "Error in opening the file" << endl;
	}
	return fin;
}

void SearchCarLotController::getVehicleList(vector<CarModel> &matchedList)
{
	ifstream fin = openFile();
	vector<CarModel> cars;
	CarModel temp;
	while ( fin >> temp.id >> temp.make >> temp.model >> temp.year) {
		cars.push_back(temp);
	}
	matchedList = cars;

}
