#pragma once

#ifndef TotalExpensesController_h
#define TotalExpensesController_h

#include "CarPriceInfoModel.h"
#include <vector>
#include <string>

using namespace std;

class TotalExpensesController
{
private:
	static vector<CarPriceInfoModel> getPriceDB();
public:
	static double getTotalExpenses();
};


#endif // !TotalExpensesController_h