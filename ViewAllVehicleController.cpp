#include "ViewAllVehicleController.h"
#include "CarModel.h"
#include "CarInfoModel.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>


using namespace std;

vector<CarInfoModel> ViewAllVehicleController::getCarInfoDB()
{
	ifstream fin;
	fin.open("CarInfoModel.txt");
	if (!fin) {
		cerr << "Error in opening the file" << endl;
	}
	vector<CarInfoModel> carInfo;
	CarInfoModel tempInfo;
	string str;
	int i = 0;
	while (getline(fin, str, ':'))
	{
		if (i == 0)
		{
			tempInfo.id = str;
			i++;
		}
		else if (i == 1)
		{
			tempInfo.type = str;
			i++;
		}
		else if (i == 2)
		{
			tempInfo.driveLine = str;
			i++;
		}
		else if (i == 3)
		{
			tempInfo.engineType = str;
			i++;
		}
		else if (i == 4)
		{
			tempInfo.engineSize = str;
			carInfo.push_back(tempInfo);
			i = 0;
		}
	}
	return carInfo;
}

vector<CarModel> ViewAllVehicleController::getCarDB()
{
	ifstream fin;
	fin.open("CarModel.txt");
	if (!fin) {
		cerr << "Error in opening the file" << endl;
	}
	vector<CarModel> car;
	CarModel temp;
	string str;
	int i = 0;
	while (getline(fin, str, ':'))
	{
		if (i == 0)
		{
			temp.id = str;
			i++;
		}
		else if (i == 1)
		{
			temp.make = str;
			i++;
		}
		else if (i == 2)
		{
			temp.model = str;
			i++;
		}
		else if (i == 3)
		{
			temp.year = str;
			car.push_back(temp);
			i = 0;
		}
	}
	return car;
}
