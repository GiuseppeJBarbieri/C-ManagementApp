#include "ViewAllVehicleController.h"
#include "CarModel.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
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
