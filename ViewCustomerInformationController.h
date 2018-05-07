#pragma once

#ifndef ViewCustomerInformationController_h
#define ViewCustomerInformationController_h

#include "CustomerInfoModel.h"

#include <vector>
using namespace std;

class ViewCustomerInformationController
{
private:

public:
	static vector<CustomerInfoModel> getAllCustomers();
	static vector<CustomerInfoModel> searchCustomer(int choice, string searchStr);

};

#endif // !ViewCarLotController.h
