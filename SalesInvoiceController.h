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
	static double viewTotalSales();
	static double viewTotalExpenses();
	static double viewGrossProfit();
};


#endif // !SalesInvoiceController_h