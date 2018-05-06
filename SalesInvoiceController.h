#pragma once

#ifndef SalesInvoiceController_h
#define SalesInvoiceController_h

#include <vector>
#include <string>

using namespace std;

class SalesInvoiceController
{
private:

public:
	static void viewVehiclesSoled();
	static void viewVehiclesBought();
	static void viewTotalSales();
	static void viewTotalExpenses();
	static void viewGrossProfit();
};


#endif // !SalesInvoiceController_h