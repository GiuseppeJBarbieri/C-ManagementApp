#pragma once

#ifndef TotalSalesController_h
#define TotalSalesController_h

#include "CarPriceInfoModel.h"
#include <vector>
#include <string>

using namespace std;

class TotalSalesController
{
private:
	static vector<CarPriceInfoModel> getPriceDB();
public:
	static double getTotalSales();	
};


#endif // !TotalSalesController_h