#include "SalesInvoiceController.h"
#include "TotalSalesController.h"
#include "TotalExpensesController.h"
using namespace std;

double SalesInvoiceController::viewTotalSales()
{
	return TotalSalesController::getTotalSales();
}

double SalesInvoiceController::viewTotalExpenses()
{
	return TotalExpensesController::getTotalExpenses();
}

double SalesInvoiceController::viewGrossProfit()
{
	double totalSales = SalesInvoiceController::viewTotalSales() - SalesInvoiceController::viewTotalExpenses();
	return totalSales;
	
}
