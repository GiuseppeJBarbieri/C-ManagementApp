#pragma once
#ifndef CustomerSearchResults_h
#define CustomerSearchResults_h
#include "CustomerInfoModel.h"
#include <vector>


using namespace std;

class CustomerSearchResults
{
private:

public:
	static void showCustomerResultScreen(vector<CustomerInfoModel> resultsList);
};

#endif  // !SearchResultsScreen_h