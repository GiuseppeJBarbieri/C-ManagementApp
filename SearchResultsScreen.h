#pragma once
#ifndef SearchResultsScreen_h
#define SearchResultsScreen_h
#include "CarModel.h"
#include <vector>


using namespace std;

class SearchResultsScreen
{
private:

public:
	static void showResultScreen(vector<CarModel> resultsList);
};

#endif  // !SearchResultsScreen_h