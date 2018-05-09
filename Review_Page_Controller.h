#ifndef Review_Page_Controller_h
#define Review_Page_Controller_h

#include <vector>
#include <string>

using namespace std;

class Review_Page_Controller
{
private :
	static void save(vector<string> reviews);
	static vector<string> retrieveFileInfo();
public:
	static void showReviews();
	static void addReview();
	static void clearReviews();	
};

#endif 